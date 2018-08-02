#ifndef MAINCLIENT_H
#define MAINCLIENT_H

#define DIR "/Users/Haibara/Documents/qt build files2/Clientfiles"

#define CONFIG_DIR "/Users/Haibara/Documents/qt build files2/Clientfiles/config.data"

#include <QMainWindow>

#include <QFont>
#include <QTabBar>

#include <QDebug>
#include <QImage>
#include <QPainter>
#include <QPixmap>
#include <QFontDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <QTableWidgetItem>
#include <QFile>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QObject>
#include <QUrl>
#include <QTime>
#include <QDateTime>
#include <QDate>
#include <QCompleter>
#include <QStringListModel>
#include <QtNetwork>
#include "login.h"
#include <QDesktopWidget>
#include <QDragEnterEvent>
#include <QDebug>
#include <QBitmap>
#include <QPainter>
#include <QMessageBox>
#include <QFontDatabase>
#include <QFile>
#include <QIODevice>
#include <QTextStream>
#include <QFileInfo>
#include <QCryptographicHash>
#include <QDateTime>
#include <QTime>
#include <QDate>

namespace Ui {
class MainClient;
}

class MainClient : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainClient(QWidget *parent = 0);
    ~MainClient();
    void getRoundPixmap(QPixmap* src,QSize size);
    void download(const QString &url, const QString &filePath);
//    void transfer();
//    bool eventFilter(QObject *watched, QEvent *event);

private slots:

    void on_tabWidget_tabBarClicked(int index);

    void on_pushButton_B_clicked();

    void on_pushButton_C_clicked();

    void on_pushButton_D_clicked();

    void on_pushButton_A_clicked();

    void sendMessage(QStringList);

    void readMessage();

    void showString(QString s1, QString s2, QString s3, QString s4, QString s5, QString s6);

    void on_style_change_clicked();

    void replyFinished();

    void on_pushButton_switch_clicked();

    void on_pushButton_quit_clicked();

    void on_pushButton_diaplayETCvehicles_clicked();

    void on_pushButton_diaplayEvehicleonroadTC_clicked();

    void on_pushButton_diaplayETCPayHistory_clicked();

signals:
    void stringReturn(QString);

private:
    Ui::MainClient *ui;
    QNetworkAccessManager netManager;
    QString filepath;
    QTcpSocket *m_tcpsocket;
    QTcpSocket *m_socket;

    bool style;

    qint32 dataSize = 0;
    QString fileName;

    void progressBar_fast();
    void progressBar();

};

#endif // MAINCLIENT_H
