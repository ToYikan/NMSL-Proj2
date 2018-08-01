#include "subclient.h"
#include "ui_subclient.h"

SubClient::SubClient(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SubClient)
{
    ui->setupUi(this);

    m_tcpsocket = new QTcpSocket;
    m_tcpsocket->connectToHost(QHostAddress::LocalHost,8848);//设置客户端的端口号
    connect(m_tcpsocket,SIGNAL(readyRead()),
            this,SLOT(readMessage()));//用于接受数据

    m_socket = new QTcpSocket;
    m_socket->connectToHost(QHostAddress::LocalHost, 7777);
    connect(m_socket, SIGNAL(readyRead()),
            this, SLOT(replyFinished()));

    this->setAttribute(Qt::WA_DeleteOnClose);
    this->setWindowFlags(Qt::FramelessWindowHint|Qt::WindowMinimizeButtonHint);
    this->setAttribute(Qt::WA_TranslucentBackground);
    this->setStyleSheet("QFrame{border-radius:10px;}");

    move(550,130);

    ui->lineEdit_4->setFocus();

    QFile file(LOGIN_DIR);
    if(file.open(QIODevice::ReadOnly)){
        QString tmp_username, tmp_password;
        tmp_username = file.readLine().trimmed();
        tmp_password = file.readLine().trimmed();
        ui->lineEdit_4->setText(tmp_username);
        ui->lineEdit_3->setText("******");
        ui->lineEdit_3->setTextMargins(13,0,10,0);
        ui->label_pass->setText(tmp_password);
        ui->checkBox_2->setChecked(true);
    }
    file.close();


    QPixmap *pixmap = new QPixmap(":/user.png");

    getRoundPixmap(pixmap, QSize(140, 140));
    ui->label_5->setScaledContents(true);
    ui->label_5->setPixmap(*pixmap);
    delete pixmap;

    QApplication::processEvents();

    int fontId = QFontDatabase::addApplicationFont(":/font/fa-solid-900.ttf");
    QStringList fontFamilies = QFontDatabase::applicationFontFamilies(fontId);

    QFont font;
    font.setFamily(fontFamilies.at(0));
    font.setPointSize(15);
    ui->label->setFont(font);
    ui->label->setText(QChar(0xf007));
    ui->label->setStyleSheet("border: 0px; color: rgb(106, 106, 106);background:none;");
    ui->label_9->setFont(font);
    ui->label_9->setText(QChar(0xf530));
    ui->label_9->setStyleSheet("border: 0px; color: rgb(106, 106, 106);background:none;");
    ui->label_10->setFont(font);
    ui->label_10->setText(QChar(0xf182));
    ui->label_10->setStyleSheet("border: 0px; color: rgb(106, 106, 106);background:none;");
    ui->label_13->setFont(font);
    ui->label_13->setText(QChar(0xf2b6));
    ui->label_13->setStyleSheet("border: 0px; color: rgb(106, 106, 106);background:none;");

    ui->label_19->setFont(font);
    ui->label_19->setText(QChar(0xf5ab));
    ui->label_19->setStyleSheet("border: 0px; color: rgb(106, 106, 106);background:none;");
    ui->label_20->setFont(font);
    ui->label_20->setText(QChar(0xf577));
    ui->label_20->setStyleSheet("border: 0px; color: rgb(106, 106, 106);background:none;");

    ui->stackedWidget->setCurrentIndex(1);
}

SubClient::~SubClient()
{
    delete ui;
}

void SubClient::on_pushButton_quit_2_clicked()
{
    this->close();
}

/**
 * shape picture to circle
 *
 * @author hzc
 * @param s1 username
 * @param s2 name
 * @param s3 position
 * @param s4 gender
 * @param s5 email
 */
void SubClient::getRoundPixmap(QPixmap* src,QSize size)

{

    QImage resultImage(size,QImage::Format_ARGB32_Premultiplied);
    QPixmap head_mask(":/mask.png");
    QPainter painter(&resultImage);
    painter.setCompositionMode(QPainter::CompositionMode_Source);
    painter.fillRect(resultImage.rect(), Qt::transparent);
    painter.setCompositionMode(QPainter::CompositionMode_SourceOver);
    painter.drawPixmap(0, 0, head_mask);
    painter.setCompositionMode(QPainter::CompositionMode_SourceOut);
    painter.drawPixmap(0, 0, src->scaled(size));
    painter.setCompositionMode(QPainter::CompositionMode_DestinationOver);
    painter.end();
    *src = QPixmap::fromImage(resultImage);
}


/**
 * download picture
 *
 * @author hzc
 * @param surl pic url
 * @param filePath local file path
 */
void SubClient::download(const QString &url, const QString &filePath)
{

    QByteArray message;
    QDataStream out(&message,QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_5_7);
    out << (quint32) (sizeof(QString));
    out << url;
    out.device()->seek(0);
    m_socket->write(message);

    this->filepath = filePath;

}

/**
 * save picture
 *
 * @author hzc
 * @param reply NetworkReply
 */
void SubClient::replyFinished()
{
    QDataStream in(m_socket);
    in.setVersion (QDataStream::Qt_5_7);

    if(dataSize == 0)
    {
       if(m_socket->bytesAvailable() < (qint32)(sizeof(quint32)+sizeof(QString)) )
       {
            return;
       }
       in >> dataSize;
       in >> fileName;
    }

    if(dataSize > qint32(m_socket->bytesAvailable()))
    {
       return;
    }

    QByteArray data;

    in>>data;

    QImage img;
    img.loadFromData(data);

    img.save(DIR + fileName);

    dataSize = 0;
    fileName.clear();
}


void SubClient::on_pushButton_switch_2_clicked()
{
    QString username = ui->lineEdit_4->text().trimmed();
    QString password = (ui->lineEdit_3->text() == "******") ?
                ui->label_pass->text() : ui->lineEdit_3->text();
    QFile file(LOGIN_DIR);
    if(file.open(QIODevice::ReadOnly)){
        QString tmp_username, tmp_password;
        tmp_username = file.readLine().trimmed();
        tmp_password = file.readLine().trimmed();
        if(tmp_username != username){
            file.remove();
            if(tmp_password == password){
                ui->lineEdit_3->clear();
                QMessageBox::warning(this,"警告", "\n请重新输入密码！",QMessageBox::Close);
                return ;
            }
        }

    }
    file.close();

    QStringList list;
    list.append("login");
    list.append(username);
    list.append(password);
    sendMessage(list);
}

void SubClient::sendMessage(QStringList list)
{

    QByteArray message;
    QDataStream out(&message,QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_5_7);
    out << (quint16) 0;
    out << list;
    out.device()->seek(0);
    out << (quint16) (message.size() - sizeof(quint16));
    m_tcpsocket->write(message);
    m_tcpsocket->flush();
}

void SubClient::readMessage()
{
    QDataStream in(m_tcpsocket);
    in.setVersion(QDataStream::Qt_5_7);
    quint16 blocksize = 0;
    if (m_tcpsocket->bytesAvailable() < (int)sizeof(quint16)){
        return;

    }
    in >> blocksize;

    if(m_tcpsocket->bytesAvailable() < blocksize){
        return;
    }
    QString from;
    in >> from;
    qDebug() << from << endl;

    if(from == "login"){

        int status;
        in >> status;


        QString username = ui->lineEdit_4->text().trimmed();
        QString password = (ui->lineEdit_3->text() == "******") ?
                    ui->label_pass->text() : ui->lineEdit_3->text();
        bool isChecked = ui->checkBox_2->isChecked();

        if(status == 0){
            status = checkpass(username, password, isChecked);
        }

        switch(status){
            case -1:
                QMessageBox::warning(this,"警告", "\n保存密码失败！",QMessageBox::Close);
                break;
            case -2:
                QMessageBox::warning(this,"警告", "\n请输入用户名！",QMessageBox::Close);
                break;
            case -3:
                QMessageBox::warning(this,"警告", "\n请输入密码！",QMessageBox::Close);
                break;
            case -4:
                QMessageBox::warning(this,"警告", "\n请稍后再试。", QMessageBox::Close);
                break;
            case -5:
                QMessageBox::warning(this,"警告", "\n密码错误！\n剩余次数：0 次。\n请5分钟后再试。",QMessageBox::Close);
                break;
            case -6:
                QMessageBox::warning(this,"警告", "\n密码错误！\n剩余次数：1 次。",QMessageBox::Close);
                break;
            case -7:
                QMessageBox::warning(this,"警告", "\n密码错误！\n剩余次数：2 次。",QMessageBox::Close);
                break;
            case -8:
                QMessageBox::warning(this,"警告", "\n找不到该用户！",QMessageBox::Close);
                break;
            case 0:
                sendSignalForLogin(username);
                break;
        }
    }
    if(from == "info"){

        QStringList list;
        in >> list;

        qDebug() << list.at(2);

        if(list.at(2) == "用户"){

            QApplication::processEvents();
            QApplication::processEvents();
            for(int i = 550; i >= 280; i-=5){
                QApplication::processEvents();
                move(i,130);
                QApplication::processEvents();
            }

            for(int i = 280; i >= 260; i-=2){
                QApplication::processEvents();
                move(i,130);
                QApplication::processEvents();
            }

            for(int i = 260; i >= 250; i-=1){
                QApplication::processEvents();
                move(i,130);
                QApplication::processEvents();
            }

            ui->stackedWidget->setCurrentIndex(0);


            ui->label_2->setText(list.at(0));
            ui->label_4->setText(list.at(1));
            ui->label_8->setText(list.at(2));
            ui->label_12->setText(list.at(3));
            ui->label_14->setText(list.at(4));

            ui->frame->setStyleSheet("QFrame{background: rgba(255, 255, 255, 40);"
                                     "border-image:url(:/bg5.png);}");

            ui->frame_2->setStyleSheet("QFrame{"
                                       "background: rgba(248, 248, 248, 200);"
                                       "border-image:none;"
                                       "border: 2px solid rgb(200, 200, 200);}");


            QPixmap *pixmap = new QPixmap(DIR + QString("/users/") + list.at(5));
            if (pixmap->isNull()){
                download("/users/" + list.at(5), DIR + QString("/users/") + list.at(5));
            }

            if(pixmap->isNull()){
                pixmap = new QPixmap(":/user.png");
            }

            QApplication::processEvents();

            getRoundPixmap(pixmap, QSize(140, 140));
            ui->label_5->setScaledContents(true);
            ui->label_5->setPixmap(*pixmap);
            delete pixmap;


            QApplication::processEvents();
        }else{
            QMessageBox::warning(this,"警告", "\n非用户账号",QMessageBox::Close);
            return;
        }

    }

//    m_tcpsocket->disconnectFromHost();
}

/**
 * check pwd.data and auto save password to file
 *
 * @author hzc
 * @param username username
 * @param passwordEntered password entered by user
 * @param status check status of checkbox
 */
int SubClient::checkpass(QString username, QString passwordEntered, bool status){
    if(status){
        QFile *file = new QFile(LOGIN_DIR);
        if(!file->exists()){
            if (file->open(QFile::ReadWrite | QFile::Text)){
                QByteArray bytePwd = passwordEntered.toLatin1();
                QByteArray bytePwdMd5 = QCryptographicHash::hash(bytePwd, QCryptographicHash::Md5);
                QString strPwdMd5 = bytePwdMd5.toHex();
                QTextStream out(file);
                out << username << "\n";
                out << strPwdMd5;
            }else{
                qDebug()<<"打开失败";
                return -1;
            }
        }
        file->close();
    }else{
        QFile file(LOGIN_DIR);
        if (file.exists()){
            file.remove();
        }
        file.close();
    }
    return 0;

}


/**
 * tool method
 *
 * @author hzc
 * @param username username
 */
void SubClient::sendSignalForLogin(QString username){
    QStringList list;
    list.append("info");
    list.append(username);
    sendMessage(list);
}

void SubClient::on_pushButton_switch_clicked()
{

    ui->frame->setStyleSheet("QFrame{background: rgba(255, 255, 255, 0);}");

    QApplication::processEvents();
    QApplication::processEvents();
    for(int i = 250; i <= 260; i+=1){
        QApplication::processEvents();
        move(i,130);
        QApplication::processEvents();
    }

    for(int i = 260; i <= 280; i+=2){
        QApplication::processEvents();
        move(i,130);
        QApplication::processEvents();
    }

    for(int i = 280; i <= 550; i+=5){
        QApplication::processEvents();
        move(i,130);
        QApplication::processEvents();
    }

    QPixmap *pixmap = new QPixmap(":/user.png");

    getRoundPixmap(pixmap, QSize(140, 140));
    ui->label_5->setScaledContents(true);
    ui->label_5->setPixmap(*pixmap);
    delete pixmap;

    ui->stackedWidget->setCurrentIndex(1);

    ui->label_2->clear();
    ui->label_4->clear();
    ui->label_8->clear();
    ui->label_12->clear();
    ui->label_14->clear();

    ui->label_2->setText("Please Login");

    ui->frame_2->setStyleSheet("QFrame{"
                               "background: rgba(248, 248, 248, 245);"
                               "border-image:none;"
                               "border: 2px solid rgb(200, 200, 200);}");

}

void SubClient::on_pushButton_quit_clicked()
{
    this->close();
}
