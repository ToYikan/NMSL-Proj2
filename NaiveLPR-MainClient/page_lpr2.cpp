#include "mainclient.h"
#include "ui_mainclient.h"

void MainClient::on_pushButton_10_clicked()
{
    QString dir = QFileDialog::getExistingDirectory(this, tr("open file"), "/Users/Haibara/Desktop");
    this->dirForImage = dir;
}

void MainClient::on_pushButton_9_clicked()
{
    QString model = ui->comboBox_model->currentText().trimmed();
    qDebug() << model;
    QStringList msg;
    msg.append("setModel");
    msg.append(model);
    sendMessage(msg);

    QFile *file = new QFile(MODEL_DIR);
    if (file->open(QFile::ReadWrite | QFile::Text)){
        QTextStream out(file);
        out << model << "\n";
    }else{
        qDebug()<<"打开失败";
    }
    file->close();
}

void MainClient::on_pushButton_generate_clicked()
{
    QString dir = this->dirForImage;
    int h_layer = ui->lineEdit_Hlayer->text().trimmed().toInt();
    int iter = ui->lineEdit_iter->text().trimmed().toInt();
    double thresholdValue = ui->lineEdit_threshold->text().trimmed().toDouble();

    if(dir.trimmed() == ""){
        QMessageBox::warning(this,"警告", "\n请选择文件夹！",QMessageBox::Close);
        return ;
    }

    QApplication::processEvents();
    ui->progressBar->setVisible(true);

    QApplication::processEvents();
    ui->progressBar->setRange(0, 100);

    QApplication::processEvents();
    ui->progressBar->setValue(10);
    QApplication::processEvents();

    CharRecognition::ANN_Train(dir.toStdString(), h_layer, iter, thresholdValue);

    QApplication::processEvents();
    ui->progressBar->setValue(40);
    QApplication::processEvents();

    CharRecognition::ANN_Train_CH(dir.toStdString(), h_layer, iter, thresholdValue);

    QApplication::processEvents();
    ui->progressBar->setValue(70);
    QApplication::processEvents();

    CharRecognition::ANN_Train_SP(dir.toStdString(), h_layer, iter, thresholdValue);

    QApplication::processEvents();
    ui->progressBar->setValue(90);
    QApplication::processEvents();

    QStringList msg;
    msg.append("trainModel");
    msg.append(dir);
    sendMessage(msg);

    ui->progressBar->setValue(100);
    QApplication::processEvents();

    ui->progressBar->setVisible(false);
}
