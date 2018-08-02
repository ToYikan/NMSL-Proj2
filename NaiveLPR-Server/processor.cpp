#include "processor.h"
#include <QDateTime>

#define DIR "/Users/Haibara/Documents/qt build files2/Serverfiles"

Processor::Processor(QTcpSocket* socket)
{
    this->m_socket = socket;
}

void Processor::work ()
{
    QDataStream in(m_socket);
    in.setVersion (QDataStream::Qt_5_7);
    quint16 blocksize = 0;
    if (m_socket->bytesAvailable() < (int)sizeof(quint16)){
        return;

    }
    in >> blocksize;

    if(m_socket->bytesAvailable() < blocksize){
        return;
    }

    QStringList list;
    in >> list;

    QByteArray message;
    QDataStream out(&message,QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_5_7);

    QString function = list.at(0);
    list.removeFirst();

    qDebug() << function << endl;

    out << (quint16) 0;

    /*
     * hzc
     *
     */

    if(function == "Default"){
        out << "Default";
    }

    if(function == "login"){
        QString username = list.at(0);
        QString password = list.at(1);
        int result = Login::login(username, password);
        out << function;
        out << result;

    }
    if(function == "info"){
        QStringList result = Login::info(list.at(0));
        out << function;
        out << result;

    }

    if(function == "send"){
        QString username = list.at(0);
        QString email = list.at(1);
        QString securityCode = list.at(2);
        int result = ForgetPassword::sendCode(username, email, securityCode);
        out << function;
        out << result;

    }

    if(function == "check"){
        QString username = list.at(0);
        QString pw1 = list.at(1);
        QString pw2 = list.at(2);
        QString code = list.at(3);
        QString securityCode = list.at(4);
        int result = ForgetPassword::checkCode(username, pw1, pw2, code, securityCode);
        out << function;
        out << result;

    }
    if(function == "transfer"){

    }

    if(function == "LPR"){

        QString filename = list.at(0);

        QString plateName = filename.split(".").at(0) + "-plate.jpg";

        Mat srcImage = imread((DIR + QString("/plates/") + filename).toStdString(), 1);

        Mat midImage;

        midImage = PlateDetection::process(srcImage);

        if(midImage.rows < 2 || midImage.cols < 2){
            out << function;
            out << QString("FAIL");
        }else{
            imwrite((DIR + QString("/plates-r/") + plateName).toStdString(), midImage);

            Mat result = PlateRecognition::process(midImage);
            vector<Mat> chars = CharSegment::process(midImage, result);
            string plate = "";
            double rate = 0;

            for(int j = 0; j < 7; ++j){
                if(j == 0){
                    vector<string> r = CharRecognition::process_ch(chars.at(j));
                    plate += r.at(0);
                    rate += stod(r.at(1)) / 7;
                }else if(j == 1){
                    vector<string> r = CharRecognition::process_sp(chars.at(j));
                    plate += r.at(0);
                    rate += stod(r.at(1)) / 7;
                }else{
                    vector<string> r = CharRecognition::process(chars.at(j));
                    plate += r.at(0);
                    rate += stod(r.at(1)) / 7;
                }
            }
            out << function;
            out << plateName;
            out << QString::fromStdString(plate);
            out << rate;
        }
    }

    //ETCpage send enter_highway_pic
    if(function == "ETCp_sendEnterPic"){
        QString filename = list.at(0);

        QString plateName = filename.split(".").at(0) + "-plate.jpg";

        QString tempPath = DIR + QString("/plates/") + filename;

        Mat srcImage = imread(tempPath.toStdString(), 1);

        Mat midImage;

        bool isPlateETCAvailable;

        QSqlQuery query;

        midImage = PlateDetection::process(srcImage);

        if(midImage.rows < 2 || midImage.cols < 2){
            out << function;
            out << QString("FAIL");
        }else{
            imwrite(tempPath.toStdString(), midImage);

            Mat result = PlateRecognition::process(midImage);
            vector<Mat> chars = CharSegment::process(midImage, result);
            string plate = "";



            for(int j = 0 ; j < 7 ; j++){
                if(j == 0){
                    vector<string> r = CharRecognition::process_ch(chars.at(j));
                    plate += r.at(0);
                }else if(j == 1){
                    vector<string> r = CharRecognition::process_sp(chars.at(j));
                    plate += r.at(0);
                }else {
                    vector<string> r = CharRecognition::process(chars.at(j));
                    plate += r.at(0);
                }
            }

            SQLTool::search(query, "plate", "ETCplates", "plate", QString::fromStdString(plate));
            if(query.next()){
                isPlateETCAvailable = true;
            }else{
                isPlateETCAvailable = false;
            }

            out << function;
            out << plateName;
            out << QString::fromStdString(plate);
            out << isPlateETCAvailable;
        }
    }

    //ETCpage send leave_highwat_pic
    if(function == "ETCp_sendLeavePic"){
        QString filename = list.at(0);

        QString plateName = filename.split(".").at(0) + "-plate.jpg";

        QString tempPath = DIR + QString("/plates/") + filename;

        Mat srcImage = imread(tempPath.toStdString(), 1);

        Mat midImage;

        midImage = PlateDetection::process(srcImage);

        if(midImage.rows < 2 || midImage.cols < 2){
            out << function;
            out << QString("FAIL");
        }else {
            imwrite(tempPath.toStdString(), midImage);

            Mat result = PlateRecognition::process(midImage);
            vector<Mat> chars = CharSegment::process(midImage, result);
            string plate = "";

            for(int j = 0 ; j < 7 ; j++){
                if(j == 0){
                    vector<string> r = CharRecognition::process_ch(chars.at(j));
                    plate += r.at(0);
                }else if(j == 1){
                    vector<string> r = CharRecognition::process_sp(chars.at(j));
                    plate += r.at(0);
                }else {
                    vector<string> r = CharRecognition::process(chars.at(j));
                    plate += r.at(0);
                }
            }

            out << function;
            out << plateName;
            out << QString::fromStdString(plate);



        }
    }
    //main cient ETCpage display all ETC vehicles
    if(function == "mc_ETCp_diaplay_ETCVehcles"){
        QSqlQuery query;
        QVector<QStringList> result;
        SQLTool::search(query, "ETCplates");
        QStringList list;
        while (query.next()) {
            list.clear();
            list.append(query.value(0).toString());
            list.append(query.value(1).toString());
            result.append(list);
        }
        out << function;
        out << result;
    }
    //main client ETCpage display all on road vehicles
    if(function == "nc_ETCp_displayOnRoadVehicles"){
        QSqlQuery query;
        QVector<QStringList> result;
        QStringList list;
        SQLTool::search(query, "ETCplates", "on_highway", QString::number(1));
        while (query.next()) {
            list.clear();
            list.append(query.value(0).toString());
            list.append(query.value(1).toString());
            result.append(list);
        }
        out << function;
        out << result;
    }
    //main client ETCpage display pay history
    if(function == "m_ETCp_displayPayHistory"){
        QSqlQuery query;
        QVector<QStringList> result;
        QStringList list;
        SQLTool::search(query, "ETChistoryPay");
        while (query.next()) {
            list.clear();
            list.append(query.value(0).toString());
            list.append(query.value(1).toString());
            list.append(query.value(2).toString());
            result.append(list);
        }
        out << function;
        out << result;
    }





    out.device()->seek(0);
    out << (quint16) (message.size() - sizeof(quint16));
    m_socket->write(message);
    m_socket->flush();
}
