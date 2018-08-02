/********************************************************************************
** Form generated from reading UI file 'mainclient.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINCLIENT_H
#define UI_MAINCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainClient
{
public:
    QWidget *centralWidget;
    QFrame *frame;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_switch;
    QPushButton *pushButton_quit;
    QFrame *frame_2;
    QLabel *label_2;
    QLabel *label_5;
    QGroupBox *groupBox;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QFrame *line_2;
    QFrame *line;
    QFrame *line_6;
    QTabWidget *tabWidget;
    QWidget *tab_7;
    QLabel *label_title;
    QWidget *tab_6;
    QWidget *tab;
    QTableWidget *tableWidget_displayETCvehicleInfo;
    QLabel *label_6;
    QLabel *label_16;
    QPushButton *pushButton_diaplayETCvehicles;
    QPushButton *pushButton_diaplayEvehicleonroadTC;
    QPushButton *pushButton_diaplayETCPayHistory;
    QTableWidget *tableWidget_displayETCPayHistory;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QWidget *tab_2;
    QWidget *tab_4;
    QWidget *tab_5;
    QWidget *tab_sell;
    QProgressBar *progressBar;
    QPushButton *style_change;
    QPushButton *pushButton_C;
    QPushButton *pushButton_D;
    QPushButton *pushButton_B;
    QPushButton *pushButton_A;

    void setupUi(QMainWindow *MainClient)
    {
        if (MainClient->objectName().isEmpty())
            MainClient->setObjectName(QStringLiteral("MainClient"));
        MainClient->resize(1161, 740);
        centralWidget = new QWidget(MainClient);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 10, 1141, 720));
        frame->setStyleSheet(QLatin1String("QFrame\n"
"{\n"
"	background:rgba(255, 255, 255, 255);\n"
"	border-image:url(:/bg4.png);\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayoutWidget = new QWidget(frame);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(39, 630, 203, 61));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_switch = new QPushButton(horizontalLayoutWidget);
        pushButton_switch->setObjectName(QStringLiteral("pushButton_switch"));
        pushButton_switch->setMinimumSize(QSize(10, 40));
        QFont font;
        font.setFamily(QStringLiteral("Helvetica 12"));
        font.setPointSize(15);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        pushButton_switch->setFont(font);
        pushButton_switch->setStyleSheet(QLatin1String("QPushButton{\n"
"	border: 2px solid rgb(15, 128, 255);\n"
"	background:rgba(15, 128, 255, 93);\n"
"	border-radius:10px;\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 15pt \"Helvetica\" bold;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	border: 2px solid rgb(15, 128, 255);\n"
"	background:rgba(15, 128, 255, 43);\n"
"	border-radius:10px;\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 15pt \"Helvetica\" bold;\n"
"}"));
        pushButton_switch->setIconSize(QSize(16, 16));
        pushButton_switch->setFlat(false);

        horizontalLayout->addWidget(pushButton_switch);

        pushButton_quit = new QPushButton(horizontalLayoutWidget);
        pushButton_quit->setObjectName(QStringLiteral("pushButton_quit"));
        pushButton_quit->setMinimumSize(QSize(0, 40));
        pushButton_quit->setFont(font);
        pushButton_quit->setStyleSheet(QLatin1String("QPushButton{\n"
"	border: 2px solid rgb(179, 179, 179);\n"
"	border-radius:15px;\n"
"	background:rgb(240, 240, 240);\n"
"\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 15pt \"Helvetica\" bold ;\n"
"}\n"
"\n"
"\n"
"QPushButton:hover{\n"
"	border: 2px solid rgb(179, 179, 179);\n"
"	border-radius:15px;\n"
"\n"
"	background:rgb(252, 252, 252);\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 15pt \"Helvetica\" bold ;\n"
"}\n"
""));
        pushButton_quit->setFlat(false);

        horizontalLayout->addWidget(pushButton_quit);

        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(20, 20, 241, 680));
        frame_2->setStyleSheet(QLatin1String("QFrame{\n"
"	background: rgba(248, 248, 248, 200);\n"
"	border-image:none;\n"
"	border: 2px solid rgb(200, 200, 200);\n"
"}"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 42, 111, 30));
        QFont font1;
        font1.setFamily(QStringLiteral("Helvetica 12"));
        font1.setPointSize(18);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(9);
        label_2->setFont(font1);
        label_2->setStyleSheet(QLatin1String("QLabel{\n"
"	background:none;\n"
"	border: 0px;\n"
"	color: rgb(106, 106, 106);\n"
"	font: 75 18pt \"Helvetica\" bold;\n"
"}"));
        label_2->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(frame_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 25, 64, 64));
        label_5->setStyleSheet(QLatin1String("QLabel{\n"
"	background:none;\n"
"	border:none;\n"
"}\n"
""));
        label_5->setAlignment(Qt::AlignCenter);
        groupBox = new QGroupBox(frame_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 140, 200, 210));
        QFont font2;
        font2.setPointSize(15);
        groupBox->setFont(font2);
        groupBox->setStyleSheet(QLatin1String("QGroupBox{\n"
"	border: 2px solid rgb(220, 220, 220);\n"
"	border-radius:20px;\n"
"	background: rgba(248, 248, 248, 200);\n"
"	margin-top: 11 px;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"background: rgb(248, 248, 248);\n"
"	subcontrol-origin: margin;\n"
"	subcontrol-position: top center;	\n"
"	padding: 1 4px;\n"
"	color: rgba(15, 128, 255, 193);\n"
"	border: 2px solid rgba(15, 128, 255, 193);\n"
"	border-radius:10px;\n"
"}"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(54, 38, 61, 20));
        QFont font3;
        font3.setFamily(QStringLiteral("Helvetica 12"));
        font3.setPointSize(14);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(9);
        label_3->setFont(font3);
        label_3->setStyleSheet(QLatin1String("QLabel{\n"
"background: none;\n"
"	border: 0px;\n"
"	color: rgb(106, 106, 106);\n"
"	font: 75 14pt \"Helvetica\" bold;\n"
"}"));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(110, 38, 91, 20));
        QFont font4;
        font4.setFamily(QStringLiteral("Times 12"));
        font4.setPointSize(14);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setWeight(50);
        label_4->setFont(font4);
        label_4->setStyleSheet(QLatin1String("QLabel{\n"
"background: none;\n"
"	border: 0px;\n"
"	color: rgb(106, 106, 106);\n"
"	font: 14pt \"Times\" bold;\n"
"}"));
        label_4->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(54, 72, 61, 20));
        label_7->setFont(font3);
        label_7->setStyleSheet(QLatin1String("QLabel{\n"
"background: none;\n"
"	border: 0px;\n"
"	color: rgb(106, 106, 106);\n"
"	font: 75 14pt \"Helvetica\" bold;\n"
"}"));
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(110, 72, 91, 20));
        label_8->setFont(font4);
        label_8->setStyleSheet(QLatin1String("QLabel{\n"
"background: none;\n"
"	border: 0px;\n"
"	color: rgb(106, 106, 106);\n"
"	font: 14pt \"Times\" bold;\n"
"}"));
        label_8->setAlignment(Qt::AlignCenter);
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(25, 40, 18, 16));
        label->setStyleSheet(QLatin1String("QLabel{\n"
"	background: white;\n"
"	border-image:none;\n"
"	border: 0px;\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 16pt \"Helvetica\" bold;\n"
"}\n"
""));
        label->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(25, 74, 18, 16));
        label_9->setStyleSheet(QLatin1String("QLabel{\n"
"	background: white;\n"
"	border-image:none;\n"
"	border: 0px;\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 16pt \"Helvetica\" bold;\n"
"}\n"
""));
        label_9->setAlignment(Qt::AlignCenter);
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(25, 107, 18, 16));
        label_10->setStyleSheet(QLatin1String("QLabel{\n"
"	background: white;\n"
"	border-image:none;\n"
"	border: 0px;\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 16pt \"Helvetica\" bold;\n"
"}\n"
""));
        label_10->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(54, 105, 61, 20));
        label_11->setFont(font3);
        label_11->setStyleSheet(QLatin1String("QLabel{\n"
"background: none;\n"
"	border: 0px;\n"
"	color: rgb(106, 106, 106);\n"
"	font: 75 14pt \"Helvetica\" bold;\n"
"}"));
        label_11->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(110, 105, 91, 20));
        label_12->setFont(font4);
        label_12->setStyleSheet(QLatin1String("QLabel{\n"
"background: none;\n"
"	border: 0px;\n"
"	color: rgb(106, 106, 106);\n"
"	font: 14pt \"Times\" bold;\n"
"}"));
        label_12->setAlignment(Qt::AlignCenter);
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(67, 156, 18, 16));
        label_13->setStyleSheet(QLatin1String("QLabel{\n"
"	background: white;\n"
"	border-image:none;\n"
"	border: 0px;\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 16pt \"Helvetica\" bold;\n"
"}\n"
""));
        label_13->setAlignment(Qt::AlignCenter);
        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(10, 175, 181, 20));
        label_14->setFont(font4);
        label_14->setStyleSheet(QLatin1String("QLabel{\n"
"background: none;\n"
"	border: 0px;\n"
"	color: rgb(106, 106, 106);\n"
"	font: 14pt \"Times\" bold;\n"
"}"));
        label_14->setAlignment(Qt::AlignCenter);
        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(96, 155, 61, 20));
        label_15->setFont(font3);
        label_15->setStyleSheet(QLatin1String("QLabel{\n"
"background: none;\n"
"	border: 0px;\n"
"	color: rgb(106, 106, 106);\n"
"	font: 75 14pt \"Helvetica\" bold;\n"
"}"));
        label_15->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        line_2 = new QFrame(groupBox);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(2, 140, 196, 2));
        line_2->setStyleSheet(QStringLiteral("border: 1px solid rgb(220, 220, 220);"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line = new QFrame(frame_2);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(2, 110, 237, 2));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(frame_2);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setGeometry(QRect(2, 600, 237, 2));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        tabWidget = new QTabWidget(frame);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(285, 38, 831, 631));
        tabWidget->setStyleSheet(QLatin1String("QTabBar::tab {\n"
"	border: 2px solid rgb(169, 169, 169);\n"
"	border-radius:10px;\n"
"	background:rgba(248, 248, 248,220);\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 15pt \"Helvetica\" bold ;\n"
"	height: 26px; \n"
"	width:  94px;\n"
"}\n"
"QTabBar::tab:hover {\n"
"	border: 2px solid rgb(169, 169, 169);\n"
"	background:rgb(255, 255, 255);\n"
"}\n"
"QTabBar::tab:selected { \n"
"	border: 2px solid rgb(15, 128, 255);\n"
"	background:rgba(15, 128, 255, 153);\n"
"	color: white;\n"
"	font: 75 16pt \"Helvetica\" bold ;\n"
"}\n"
"\n"
""));
        tabWidget->setIconSize(QSize(16, 16));
        tabWidget->setTabsClosable(false);
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        label_title = new QLabel(tab_7);
        label_title->setObjectName(QStringLiteral("label_title"));
        label_title->setGeometry(QRect(50, 0, 730, 590));
        label_title->setStyleSheet(QLatin1String("QLabel{\n"
"	border-image:url(:/welcome2.png);\n"
"	background: none;\n"
"}"));
        label_title->setScaledContents(true);
        tabWidget->addTab(tab_7, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        tabWidget->addTab(tab_6, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tableWidget_displayETCvehicleInfo = new QTableWidget(tab);
        if (tableWidget_displayETCvehicleInfo->columnCount() < 2)
            tableWidget_displayETCvehicleInfo->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_displayETCvehicleInfo->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_displayETCvehicleInfo->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget_displayETCvehicleInfo->setObjectName(QStringLiteral("tableWidget_displayETCvehicleInfo"));
        tableWidget_displayETCvehicleInfo->setGeometry(QRect(10, 50, 251, 511));
        tableWidget_displayETCvehicleInfo->setStyleSheet(QString::fromUtf8("QTableWidget\n"
"{\n"
"    	color: rgb(106, 106, 106);    /*\345\211\215\346\231\257\350\211\262\357\274\232\346\226\207\345\255\227\351\242\234\350\211\262*/\n"
"    gridline-color:rgb(200, 200, 200);      /*\350\241\250\346\240\274\344\270\255\347\232\204\347\275\221\346\240\274\347\272\277\346\235\241\351\242\234\350\211\262*/\n"
"    background:white;\n"
"    /*\350\256\276\347\275\256\344\272\244\346\233\277\351\242\234\350\211\262\357\274\214\351\234\200\350\246\201\345\234\250\345\207\275\346\225\260\345\261\236\346\200\247\344\270\255\350\256\276\347\275\256:tableWidget->setAlternatingRowColors(true)*/\n"
"    /*alternate-background-color:red;   */\n"
"    selection-color:rgb(15, 128, 255);    /*\351\274\240\346\240\207\351\200\211\344\270\255\346\227\266\345\211\215\346\231\257\350\211\262\357\274\232\346\226\207\345\255\227\351\242\234\350\211\262*/\n"
"    selection-background-color:lightgray;   /*\351\274\240\346\240\207\351\200\211\344\270\255\346\227\266\350\203\214\346\231\257\350\211\262*/\n"
""
                        "	border: 2px solid rgb(210, 210, 210);\n"
"	border-radius:5px;\n"
"	font: 15pt \"Times\" bold;\n"
"    padding:0px 0px;  /*\350\241\250\346\240\274\344\270\216\350\276\271\346\241\206\347\232\204\351\227\264\350\267\235*/\n"
"	height: 30px;\n"
"}\n"
"\n"
"/*\350\256\276\347\275\256\350\241\250\345\244\264\345\261\236\346\200\247*/\n"
"QTableWidget QHeaderView\n"
"{\n"
"	font: 75 15pt \"Helvetica\" bold ;\n"
"    background-color:#F0F0F0;  /*lightgray*/\n"
"	border:0px solid grey;\n"
"	border-bottom:1px solid rgb(200, 200, 200);\n"
"	border-radius:0px;\n"
"    /*color:black;*/\n"
"    /*padding-left:4px;*/\n"
"    /*border:3px solid red;*/   /*\350\241\250\345\244\264\350\276\271\346\241\206\347\272\277\347\232\204\345\256\275\345\272\246\343\200\201\351\242\234\350\211\262*/\n"
"    /*border:1px solid gray;*/\n"
"}\n"
"QTableWidget::item{\n"
"	border: 1px solid rgb(250, 250, 250);\n"
"}\n"
""));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 20, 100, 30));
        label_6->setStyleSheet(QLatin1String("QLabel{\n"
"	background: none;\n"
"	border-image:none;\n"
"	border: 0px;\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 15pt \"Helvetica\" bold;\n"
"}"));
        label_16 = new QLabel(tab);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(150, 20, 100, 30));
        label_16->setStyleSheet(QLatin1String("QLabel{\n"
"	background: none;\n"
"	border-image:none;\n"
"	border: 0px;\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 15pt \"Helvetica\" bold;\n"
"}"));
        pushButton_diaplayETCvehicles = new QPushButton(tab);
        pushButton_diaplayETCvehicles->setObjectName(QStringLiteral("pushButton_diaplayETCvehicles"));
        pushButton_diaplayETCvehicles->setGeometry(QRect(290, 90, 140, 40));
        pushButton_diaplayETCvehicles->setStyleSheet(QLatin1String("QPushButton{\n"
"	border: 2px solid rgb(179, 179, 179);\n"
"	border-radius:10px;\n"
"	background:rgba(248, 248, 248,220);\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 14pt \"Helvetica\" bold ;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	border: 2px solid rgb(15, 128, 255);\n"
"	background:rgba(15, 128, 255, 43);\n"
"	border-radius:10px;\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 14pt \"Helvetica\" bold;\n"
"}"));
        pushButton_diaplayEvehicleonroadTC = new QPushButton(tab);
        pushButton_diaplayEvehicleonroadTC->setObjectName(QStringLiteral("pushButton_diaplayEvehicleonroadTC"));
        pushButton_diaplayEvehicleonroadTC->setGeometry(QRect(290, 190, 140, 40));
        pushButton_diaplayEvehicleonroadTC->setStyleSheet(QLatin1String("QPushButton{\n"
"	border: 2px solid rgb(179, 179, 179);\n"
"	border-radius:10px;\n"
"	background:rgba(248, 248, 248,220);\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 14pt \"Helvetica\" bold ;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	border: 2px solid rgb(15, 128, 255);\n"
"	background:rgba(15, 128, 255, 43);\n"
"	border-radius:10px;\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 14pt \"Helvetica\" bold;\n"
"}"));
        pushButton_diaplayETCPayHistory = new QPushButton(tab);
        pushButton_diaplayETCPayHistory->setObjectName(QStringLiteral("pushButton_diaplayETCPayHistory"));
        pushButton_diaplayETCPayHistory->setGeometry(QRect(290, 290, 140, 40));
        pushButton_diaplayETCPayHistory->setStyleSheet(QLatin1String("QPushButton{\n"
"	border: 2px solid rgb(179, 179, 179);\n"
"	border-radius:10px;\n"
"	background:rgba(248, 248, 248,220);\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 14pt \"Helvetica\" bold ;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	border: 2px solid rgb(15, 128, 255);\n"
"	background:rgba(15, 128, 255, 43);\n"
"	border-radius:10px;\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 14pt \"Helvetica\" bold;\n"
"}"));
        tableWidget_displayETCPayHistory = new QTableWidget(tab);
        if (tableWidget_displayETCPayHistory->columnCount() < 3)
            tableWidget_displayETCPayHistory->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_displayETCPayHistory->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_displayETCPayHistory->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_displayETCPayHistory->setHorizontalHeaderItem(2, __qtablewidgetitem4);
        tableWidget_displayETCPayHistory->setObjectName(QStringLiteral("tableWidget_displayETCPayHistory"));
        tableWidget_displayETCPayHistory->setGeometry(QRect(450, 50, 371, 511));
        tableWidget_displayETCPayHistory->setStyleSheet(QString::fromUtf8("QTableWidget\n"
"{\n"
"    	color: rgb(106, 106, 106);    /*\345\211\215\346\231\257\350\211\262\357\274\232\346\226\207\345\255\227\351\242\234\350\211\262*/\n"
"    gridline-color:rgb(200, 200, 200);      /*\350\241\250\346\240\274\344\270\255\347\232\204\347\275\221\346\240\274\347\272\277\346\235\241\351\242\234\350\211\262*/\n"
"    background:white;\n"
"    /*\350\256\276\347\275\256\344\272\244\346\233\277\351\242\234\350\211\262\357\274\214\351\234\200\350\246\201\345\234\250\345\207\275\346\225\260\345\261\236\346\200\247\344\270\255\350\256\276\347\275\256:tableWidget->setAlternatingRowColors(true)*/\n"
"    /*alternate-background-color:red;   */\n"
"    selection-color:rgb(15, 128, 255);    /*\351\274\240\346\240\207\351\200\211\344\270\255\346\227\266\345\211\215\346\231\257\350\211\262\357\274\232\346\226\207\345\255\227\351\242\234\350\211\262*/\n"
"    selection-background-color:lightgray;   /*\351\274\240\346\240\207\351\200\211\344\270\255\346\227\266\350\203\214\346\231\257\350\211\262*/\n"
""
                        "	border: 2px solid rgb(210, 210, 210);\n"
"	border-radius:5px;\n"
"	font: 15pt \"Times\" bold;\n"
"    padding:0px 0px;  /*\350\241\250\346\240\274\344\270\216\350\276\271\346\241\206\347\232\204\351\227\264\350\267\235*/\n"
"	height: 30px;\n"
"}\n"
"\n"
"/*\350\256\276\347\275\256\350\241\250\345\244\264\345\261\236\346\200\247*/\n"
"QTableWidget QHeaderView\n"
"{\n"
"	font: 75 15pt \"Helvetica\" bold ;\n"
"    background-color:#F0F0F0;  /*lightgray*/\n"
"	border:0px solid grey;\n"
"	border-bottom:1px solid rgb(200, 200, 200);\n"
"	border-radius:0px;\n"
"    /*color:black;*/\n"
"    /*padding-left:4px;*/\n"
"    /*border:3px solid red;*/   /*\350\241\250\345\244\264\350\276\271\346\241\206\347\272\277\347\232\204\345\256\275\345\272\246\343\200\201\351\242\234\350\211\262*/\n"
"    /*border:1px solid gray;*/\n"
"}\n"
"QTableWidget::item{\n"
"	border: 1px solid rgb(250, 250, 250);\n"
"}\n"
""));
        label_17 = new QLabel(tab);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(460, 20, 100, 30));
        label_17->setStyleSheet(QLatin1String("QLabel{\n"
"	background: none;\n"
"	border-image:none;\n"
"	border: 0px;\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 15pt \"Helvetica\" bold;\n"
"}"));
        label_18 = new QLabel(tab);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(590, 20, 100, 30));
        label_18->setStyleSheet(QLatin1String("QLabel{\n"
"	background: none;\n"
"	border-image:none;\n"
"	border: 0px;\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 15pt \"Helvetica\" bold;\n"
"}"));
        label_19 = new QLabel(tab);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(710, 20, 100, 30));
        label_19->setStyleSheet(QLatin1String("QLabel{\n"
"	background: none;\n"
"	border-image:none;\n"
"	border: 0px;\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 15pt \"Helvetica\" bold;\n"
"}"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        tabWidget->addTab(tab_5, QString());
        tab_sell = new QWidget();
        tab_sell->setObjectName(QStringLiteral("tab_sell"));
        tabWidget->addTab(tab_sell, QString());
        progressBar = new QProgressBar(frame);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(430, 690, 550, 10));
        progressBar->setStyleSheet(QLatin1String("QProgressBar::chunk {\n"
"   border-radius: 5px;\n"
"   background-color: white;\n"
"\n"
"\n"
"}\n"
"\n"
"QProgressBar {\n"
"   border-radius: 5px;\n"
"   text-align: center;\n"
"   background-color: grey;\n"
"}"));
        progressBar->setValue(0);
        progressBar->setTextVisible(false);
        style_change = new QPushButton(frame);
        style_change->setObjectName(QStringLiteral("style_change"));
        style_change->setGeometry(QRect(1100, 7, 30, 30));
        pushButton_C = new QPushButton(frame);
        pushButton_C->setObjectName(QStringLiteral("pushButton_C"));
        pushButton_C->setGeometry(QRect(49, 510, 80, 78));
        pushButton_C->setMinimumSize(QSize(0, 40));
        pushButton_C->setFont(font3);
        pushButton_C->setStyleSheet(QLatin1String("QPushButton{\n"
"	border: 2px solid rgb(200, 200, 200);\n"
"	border-radius:39px;\n"
"	background:none;\n"
"\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 14pt \"Helvetica\" bold ;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	border: 2px solid rgb(200, 200, 200);\n"
"	background:white;\n"
"\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 15pt \"Helvetica\" bold ;\n"
"}\n"
"\n"
"QPushButton:checked{\n"
"	border: 2px solid  rgb(15, 128, 255);\n"
"	background:rgba(15, 128, 255, 43);\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 15pt \"Helvetica\" bold;\n"
"}"));
        pushButton_C->setCheckable(true);
        pushButton_C->setAutoExclusive(true);
        pushButton_C->setFlat(false);
        pushButton_D = new QPushButton(frame);
        pushButton_D->setObjectName(QStringLiteral("pushButton_D"));
        pushButton_D->setGeometry(QRect(150, 510, 80, 78));
        pushButton_D->setMinimumSize(QSize(0, 40));
        pushButton_D->setFont(font3);
        pushButton_D->setStyleSheet(QLatin1String("QPushButton{\n"
"	border: 2px solid rgb(200, 200, 200);\n"
"	border-radius:39px;\n"
"	background:none;\n"
"\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 14pt \"Helvetica\" bold ;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	border: 2px solid rgb(200, 200, 200);\n"
"	background:white;\n"
"\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 15pt \"Helvetica\" bold ;\n"
"}\n"
"\n"
"QPushButton:checked{\n"
"	border: 2px solid  rgb(15, 128, 255);\n"
"	background:rgba(15, 128, 255, 43);\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 15pt \"Helvetica\" bold;\n"
"}"));
        pushButton_D->setCheckable(true);
        pushButton_D->setAutoExclusive(true);
        pushButton_D->setFlat(false);
        pushButton_B = new QPushButton(frame);
        pushButton_B->setObjectName(QStringLiteral("pushButton_B"));
        pushButton_B->setGeometry(QRect(150, 410, 80, 78));
        pushButton_B->setMinimumSize(QSize(0, 40));
        pushButton_B->setFont(font3);
        pushButton_B->setStyleSheet(QLatin1String("QPushButton{\n"
"	border: 2px solid rgb(200, 200, 200);\n"
"	border-radius:39px;\n"
"	background:none;\n"
"\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 14pt \"Helvetica\" bold ;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	border: 2px solid rgb(200, 200, 200);\n"
"	background:white;\n"
"\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 15pt \"Helvetica\" bold ;\n"
"}\n"
"\n"
"QPushButton:checked{\n"
"	border: 2px solid  rgb(15, 128, 255);\n"
"	background:rgba(15, 128, 255, 43);\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 15pt \"Helvetica\" bold;\n"
"}"));
        pushButton_B->setCheckable(true);
        pushButton_B->setAutoExclusive(true);
        pushButton_B->setFlat(false);
        pushButton_A = new QPushButton(frame);
        pushButton_A->setObjectName(QStringLiteral("pushButton_A"));
        pushButton_A->setGeometry(QRect(49, 410, 80, 78));
        pushButton_A->setMinimumSize(QSize(0, 40));
        pushButton_A->setFont(font3);
        pushButton_A->setStyleSheet(QLatin1String("QPushButton{\n"
"	border: 2px solid rgb(200, 200, 200);\n"
"	border-radius:39px;\n"
"	background:none;\n"
"\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 14pt \"Helvetica\" bold ;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	border: 2px solid rgb(200, 200, 200);\n"
"	background:white;\n"
"\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 15pt \"Helvetica\" bold ;\n"
"}\n"
"\n"
"QPushButton:checked{\n"
"	border: 2px solid  rgb(15, 128, 255);\n"
"	background:rgba(15, 128, 255, 43);\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 15pt \"Helvetica\" bold;\n"
"}"));
        pushButton_A->setCheckable(true);
        pushButton_A->setChecked(true);
        pushButton_A->setAutoExclusive(true);
        pushButton_A->setFlat(false);
        frame_2->raise();
        horizontalLayoutWidget->raise();
        tabWidget->raise();
        progressBar->raise();
        style_change->raise();
        pushButton_C->raise();
        pushButton_D->raise();
        pushButton_B->raise();
        pushButton_A->raise();
        MainClient->setCentralWidget(centralWidget);

        retranslateUi(MainClient);

        pushButton_switch->setDefault(true);
        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainClient);
    } // setupUi

    void retranslateUi(QMainWindow *MainClient)
    {
        MainClient->setWindowTitle(QApplication::translate("MainClient", "MainClient", Q_NULLPTR));
        pushButton_switch->setText(QApplication::translate("MainClient", "Switch", Q_NULLPTR));
        pushButton_quit->setText(QApplication::translate("MainClient", "Quit", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainClient", "NULL", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainClient", "Pic", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainClient", "  Profile  ", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainClient", "Name: ", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainClient", "-", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainClient", "Status:", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainClient", "-", Q_NULLPTR));
        label->setText(QApplication::translate("MainClient", "TextLabel", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainClient", "TextLabel", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainClient", "TextLabel", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainClient", "Gender:", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainClient", "-", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainClient", "Email", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainClient", "aaa@", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainClient", "Email", Q_NULLPTR));
        label_title->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("MainClient", "Welcome", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("MainClient", "Purchase", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainClient", "Plate", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainClient", "Balance", Q_NULLPTR));
        pushButton_diaplayETCvehicles->setText(QApplication::translate("MainClient", "Display ETC Vehicles", Q_NULLPTR));
        pushButton_diaplayEvehicleonroadTC->setText(QApplication::translate("MainClient", "Display Vehicles on Highway", Q_NULLPTR));
        pushButton_diaplayETCPayHistory->setText(QApplication::translate("MainClient", "Display Vehicle Info", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainClient", "Plate", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainClient", "Cost", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainClient", "Datetime", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainClient", "ETCsystem", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainClient", "Warehouse", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainClient", "Personnel", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainClient", "System", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_sell), QApplication::translate("MainClient", "Sell", Q_NULLPTR));
        style_change->setText(QString());
        pushButton_C->setText(QApplication::translate("MainClient", "C", Q_NULLPTR));
        pushButton_D->setText(QApplication::translate("MainClient", "D", Q_NULLPTR));
        pushButton_B->setText(QApplication::translate("MainClient", "B", Q_NULLPTR));
        pushButton_A->setText(QApplication::translate("MainClient", "A", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainClient: public Ui_MainClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINCLIENT_H
