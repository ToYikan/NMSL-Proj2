#include "mainclient.h"
#include "ui_mainclient.h"

MainClient::MainClient(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainClient)
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

    move(120,60);
    on_welcome_button_clicked();

}

MainClient::~MainClient()
{
    delete ui;
}

/**
 * on_pushButton_clicked
 *
 * @author hzc
 */
void MainClient::on_pushButton_quit_clicked()
{
    this->close();
}

/**
 * slot method
 *
 * @author hzc
 * @param s1 username
 * @param s2 name
 * @param s3 position
 * @param s4 gender
 * @param s5 email
 */
void MainClient::showString(QString s1, QString s2, QString s3, QString s4, QString s5, QString s6)
{
    this->show();
    ui->pushButton_switch->setEnabled(false);


    /*
     * slow start
     *
     */

    this->processPhase = 0;

    ui->label_platePreview->installEventFilter(this);


    int fontId = QFontDatabase::addApplicationFont(":/font/fa-solid-900.ttf");
    QStringList fontFamilies = QFontDatabase::applicationFontFamilies(fontId);

    QFont icon_search;
    icon_search.setFamily(fontFamilies.at(0));
    icon_search.setPointSize(24);

    ui->style_change->setFont(icon_search);
    ui->style_change->setText(QChar(0xf204));
    ui->style_change->setStyleSheet("QPushButton{border: 0px; color: white;} "
                                    "QPushButton:hover{border: 0px; color: rgba(15, 128, 255, 190);} ");


    ui->label_2->setText(s1);
    ui->label_4->setText(s2);
    ui->label_8->setText(s3);
    ui->label_12->setText(s4);
    ui->label_14->setText(s5);


    QPixmap *pixmap = new QPixmap(DIR + QString("/users/") + s6);
    if (pixmap->isNull()){
        download("/users/" + s6, DIR + QString("/users/") + s6);
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

    //initialize tiny icon

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

    ui->welcome_button->setFont(font);
    ui->welcome_button->setText(QChar(0xf111));
    ui->welcome_button->setStyleSheet("QPushButton{border: 0px; color: rgb(200, 200, 200);background:none;}"
                                      "QPushButton:hover{border: 0px; color: rgba(15, 128, 255, 190);}"
                                      "QPushButton:checked{border: 0px; color: rgba(15, 128, 255, 190);}");

    ui->label_20->setFont(font);
    ui->label_20->setText(QChar(0xf138));
    ui->label_20->setStyleSheet("border: 0px; color: rgb(106, 106, 106);background:none;");

    style = false;
    QFile *file = new QFile(CONFIG_DIR);
    if(file->exists()){
        if (file->open(QFile::ReadWrite | QFile::Text)){
           QString status;
           status = file->readLine().trimmed();
           if(status == "1"){
               style = !style;
               int fontId = QFontDatabase::addApplicationFont(":/font/fa-solid-900.ttf");
               QStringList fontFamilies = QFontDatabase::applicationFontFamilies(fontId);
               QFont icon_search;
               icon_search.setFamily(fontFamilies.at(0));
               icon_search.setPointSize(24);
               ui->frame->setStyleSheet("QFrame{background: rgba(255, 255, 255, 0);"
                                        "border-image:url(:/bg5.png);}");
               ui->style_change->setFont(icon_search);
               ui->style_change->setText(QChar(0xf205));
               ui->style_change->setStyleSheet("QPushButton{border: 0px; color: white;} "
                                               "QPushButton:hover{border: 0px; color: rgba(15, 128, 255, 190);} ");
           }
        }else{
            qDebug()<<"打开失败";
        }
    }
    file->close();





    QApplication::processEvents();



    ui->progressBar->setVisible(true);

    progressBar();

    ui->progressBar->setVisible(false);


    ui->comboBox_selectType->setView(new QListView());
    ui->comboBox_p0->setView(new QListView());
    ui->comboBox_p1->setView(new QListView());
    ui->comboBox_p2->setView(new QListView());
    ui->comboBox_p3->setView(new QListView());
    ui->comboBox_p4->setView(new QListView());
    ui->comboBox_p5->setView(new QListView());
    ui->comboBox_p6->setView(new QListView());


    ui->pushButton_switch->setEnabled(true);

    ui->tableWidget_history->horizontalHeader()->setDefaultSectionSize(90);
    ui->tableWidget_history->setColumnWidth(0, 190);
    ui->tableWidget_history->setColumnWidth(3, 20);
    ui->tableWidget_history->horizontalHeader()->setStretchLastSection(true);
    ui->tableWidget_history->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget_history->setAlternatingRowColors(true);
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
void MainClient::getRoundPixmap(QPixmap* src,QSize size)

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
 * on_pushButton_A_clicked slot
 *
 * @author hzc
 */
void MainClient::on_pushButton_A_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}

/**
 * on_pushButton_B_clicked slot
 *
 * @author hzc
 */
void MainClient::on_pushButton_B_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);

}

/**
 * on_pushButton_C_clicked slot
 *
 * @author hzc
 */
void MainClient::on_pushButton_C_clicked()
{

    ui->stackedWidget->setCurrentIndex(3);
}

/**
 * on_pushButton_D_clicked slot
 *
 * @author hzc
 */
void MainClient::on_pushButton_D_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

/**
 * on_pushButton_E_clicked slot
 *
 * @author hzc
 */
void MainClient::on_pushButton_E_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}


/**
 * on_welcome_button_clicked slot
 *
 * @author hzc
 */
void MainClient::on_welcome_button_clicked()
{
    ui->welcome_button->setChecked(true);
    ui->stackedWidget->setCurrentIndex(0);
}


/**
 * progress bar
 *
 * @author hzc
 */
void MainClient::progressBar()
{
    ui->progressBar->setVisible(true);
    ui->progressBar->setRange(0, 100);
    for (int i = 0; i <= 100; i++){
        for(int j = 0; j < 1000000; j++){
            i = i + 1;
            i = i - 1;
        }
        ui->progressBar->setValue(i);
        QApplication::processEvents();
    }
    ui->progressBar->setVisible(false);
}

/**
 * fast version progress bar
 *
 * @author hzc
 */
void MainClient::progressBar_fast()
{
    ui->progressBar->setVisible(true);
    ui->progressBar->setRange(0, 100);
    for (int i = 0; i <= 100; i++){
        for(int j = 0; j < 300000; j++){
            i = i + 1;
            i = i - 1;
        }
        ui->progressBar->setValue(i);
        QApplication::processEvents();
    }
    ui->progressBar->setVisible(false);
}


/**
 * on_pushButton_2_clicked slot
 *
 * @author hzc
 */
void MainClient::on_pushButton_switch_clicked()
{
    QApplication::processEvents();
    Login *lg = new Login;
    connect(this, SIGNAL(stringReturn(QString)), lg, SLOT(showString(QString)));
    emit stringReturn(this->ui->label_2->text());
    this->close();
}

/**
 * download picture
 *
 * @author hzc
 * @param surl pic url
 * @param filePath local file path
 */
void MainClient::download(const QString &url, const QString &filePath)
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
void MainClient::replyFinished()
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

void MainClient::on_style_change_clicked()
{
    int fontId = QFontDatabase::addApplicationFont(":/font/fa-solid-900.ttf");
    QStringList fontFamilies = QFontDatabase::applicationFontFamilies(fontId);
    QFont icon_search;
    icon_search.setFamily(fontFamilies.at(0));
    icon_search.setPointSize(24);


    if(style){
        ui->frame->setStyleSheet("QFrame{background:rgba(255, 255, 255, 255);"
                                 "border-image:url(:/bg4.png);}");
        ui->style_change->setFont(icon_search);
        ui->style_change->setText(QChar(0xf204));
        ui->style_change->setStyleSheet("QPushButton{border: 0px; color: white;} "
                                        "QPushButton:hover{border: 0px; color: rgba(15, 128, 255, 190);} ");
    }else{
        ui->frame->setStyleSheet("QFrame{background: rgba(255, 255, 255, 0);"
                                 "border-image:url(:/bg5.png);}");
        ui->style_change->setFont(icon_search);
        ui->style_change->setText(QChar(0xf205));
        ui->style_change->setStyleSheet("QPushButton{border: 0px; color: white;} "
                                        "QPushButton:hover{border: 0px; color: rgba(15, 128, 255, 190);} ");
    }
    style = !style;

    QFile *file = new QFile(CONFIG_DIR);
    if (file->open(QFile::ReadWrite | QFile::Text)){
        QTextStream out(file);
        out << style << "\n";
    }else{
        qDebug()<<"打开失败";
    }
    file->close();
}
