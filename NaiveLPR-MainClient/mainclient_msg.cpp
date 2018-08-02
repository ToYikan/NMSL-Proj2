#include "mainclient.h"
#include "ui_mainclient.h"

void MainClient::sendMessage(QStringList list)
{
    QByteArray message;
    QDataStream out(&message,QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_5_7);
    out << (quint16) 0;
    out << list;
    out.device()->seek(0);
    out << (quint16) (message.size() - sizeof(quint16));
    m_tcpsocket->write(message);
}

void MainClient::readMessage()
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
    qDebug() << "From: " << from << endl;

    if(from == "transfer"){


    }
    //main client ETC page display ETC vehicles
    if(from == "mc_ETCp_diaplayETCVehicles"){
        ui->tableWidget_displayETCvehicleInfo->clear();
       QVector<QStringList> result;
       in >> result;
       int i = 0;
       for(QStringList list : result){
           ui->tableWidget_displayETCvehicleInfo->insertRow(i);
           ui->tableWidget_displayETCvehicleInfo->setItem(i, 0, new QTableWidgetItem(list.at(0)));
           ui->tableWidget_displayETCvehicleInfo->setItem(i, 1, new QTableWidgetItem(list.at(1)));
           i++;
       }
       ui->tableWidget_displayETCvehicleInfo->setRowCount(i);
       progressBar();

    }
    //main client ETC page display all on road vehicles
    if(from == "mc_ETCp_displayOnRoadVehicles"){
        ui->tableWidget_displayETCvehicleInfo->clear();
        QVector<QStringList> result;
        in >> result;
        int i = 0;
        for(QStringList list : result){
            ui->tableWidget_displayETCvehicleInfo->insertRow(i);
            ui->tableWidget_displayETCvehicleInfo->setItem(i, 0, new QTableWidgetItem(list.at(0)));
            ui->tableWidget_displayETCvehicleInfo->setItem(i, 1, new QTableWidgetItem(list.at(1)));
            i++;
        }
        ui->tableWidget_displayETCvehicleInfo->setRowCount(i);
        progressBar();
    }
    //main client display all pay history
    if(from == "mc_ETCp_displayPayHistory"){
        ui->tableWidget_displayETCPayHistory->clear();
        QVector<QStringList> result;
        in >> result;
        int i = 0;
        for(QStringList list : result){
            ui->tableWidget_displayETCPayHistory->insertRow(i);
            ui->tableWidget_displayETCPayHistory->setItem(i, 0, new QTableWidgetItem(list.at(0)));
            ui->tableWidget_displayETCPayHistory->setItem(i, 1, new QTableWidgetItem(list.at(1)));
            ui->tableWidget_displayETCPayHistory->setItem(i, 2, new QTableWidgetItem(list.at(2)));
            i++;
        }
        ui->tableWidget_displayETCPayHistory->setRowCount(i);
        progressBar();
    }

}
