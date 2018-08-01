/********************************************************************************
** Form generated from reading UI file 'subclient.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBCLIENT_H
#define UI_SUBCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SubClient
{
public:
    QWidget *centralWidget;
    QFrame *frame;
    QFrame *frame_2;
    QLabel *label_2;
    QLabel *label_5;
    QFrame *line;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_switch;
    QPushButton *pushButton_quit;
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
    QPushButton *pushButton_A;
    QPushButton *pushButton_B;
    QWidget *page_2;
    QCheckBox *checkBox_2;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_3;
    QLabel *label_18;
    QLabel *label_17;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_switch_2;
    QPushButton *pushButton_quit_2;
    QLabel *label_pass;
    QLabel *label_19;
    QLabel *label_20;
    QProgressBar *progressBar;
    QStackedWidget *stackedWidget_2;
    QWidget *page_3;
    QFrame *frame_3;
    QLabel *label_showNewPortrait;
    QPushButton *pushButton_addNewPortrait;
    QPushButton *pushButton_confirmNewStaff;
    QLabel *label_showNewPortraitPath;
    QPushButton *pushButton_confirmNewStaff_2;
    QLabel *label_showPlate;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_showNumber;
    QLabel *label_25;
    QLabel *label_showProbability;
    QLabel *label_26;
    QWidget *page_4;
    QLabel *label_vehicleFromPic;
    QLabel *label_vehicleTarPic;
    QLabel *label_EnterHighwayTimeTip;
    QLabel *label_EnterHighwayTimeTip_2;
    QDateTimeEdit *dateTimeEdit_vehicleFromDatetime;
    QDateTimeEdit *dateTimeEdit_vehicleTarDateTime;
    QPushButton *pushButton_EnterhighwayPic;
    QPushButton *pushButton_leaveHighwayPic;
    QLabel *label_withoutETCwarning;
    QProgressBar *progressBar_2;

    void setupUi(QMainWindow *SubClient)
    {
        if (SubClient->objectName().isEmpty())
            SubClient->setObjectName(QStringLiteral("SubClient"));
        SubClient->resize(971, 579);
        centralWidget = new QWidget(SubClient);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 10, 950, 561));
        frame->setStyleSheet(QLatin1String("QFrame\n"
"{\n"
"	background:rgba(255, 255, 255, 0);\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(20, 10, 250, 540));
        frame_2->setStyleSheet(QLatin1String("QFrame{\n"
"	background: rgba(248, 248, 248, 245);\n"
"	border-image:none;\n"
"	border: 2px solid rgb(200, 200, 200);\n"
"}"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 42, 130, 30));
        QFont font;
        font.setFamily(QStringLiteral("Helvetica 12"));
        font.setPointSize(17);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        label_2->setFont(font);
        label_2->setStyleSheet(QLatin1String("QLabel{\n"
"	background:none;\n"
"	border: 0px;\n"
"	color: rgb(106, 106, 106);\n"
"	font: 75 17pt \"Helvetica\" bold;\n"
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
        line = new QFrame(frame_2);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(2, 110, 271, 2));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        stackedWidget = new QStackedWidget(frame_2);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(7, 120, 236, 410));
        stackedWidget->setStyleSheet(QLatin1String("QStackedWidget{\n"
"	border:0px;\n"
"	background:none;\n"
"}"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        horizontalLayoutWidget = new QWidget(page);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 340, 220, 61));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_switch = new QPushButton(horizontalLayoutWidget);
        pushButton_switch->setObjectName(QStringLiteral("pushButton_switch"));
        pushButton_switch->setMinimumSize(QSize(10, 40));
        QFont font1;
        font1.setFamily(QStringLiteral("Helvetica 12"));
        font1.setPointSize(15);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(9);
        pushButton_switch->setFont(font1);
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
        pushButton_quit->setFont(font1);
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

        groupBox = new QGroupBox(page);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(15, 20, 210, 190));
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
        label_3->setGeometry(QRect(54, 33, 61, 20));
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
        label_4->setGeometry(QRect(110, 33, 91, 20));
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
        label_7->setGeometry(QRect(54, 67, 61, 20));
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
        label_8->setGeometry(QRect(110, 67, 91, 20));
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
        label->setGeometry(QRect(25, 35, 18, 16));
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
        label_9->setGeometry(QRect(25, 69, 18, 16));
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
        label_10->setGeometry(QRect(25, 102, 18, 16));
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
        label_11->setGeometry(QRect(54, 100, 61, 20));
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
        label_12->setGeometry(QRect(110, 100, 91, 20));
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
        label_13->setGeometry(QRect(72, 141, 18, 16));
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
        label_14->setGeometry(QRect(15, 160, 181, 20));
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
        label_15->setGeometry(QRect(101, 140, 61, 20));
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
        line_2->setGeometry(QRect(2, 130, 226, 2));
        line_2->setStyleSheet(QStringLiteral("border: 1px solid rgb(220, 220, 220);"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        pushButton_A = new QPushButton(page);
        pushButton_A->setObjectName(QStringLiteral("pushButton_A"));
        pushButton_A->setGeometry(QRect(29, 240, 80, 78));
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
        pushButton_B = new QPushButton(page);
        pushButton_B->setObjectName(QStringLiteral("pushButton_B"));
        pushButton_B->setGeometry(QRect(130, 240, 80, 78));
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
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        checkBox_2 = new QCheckBox(page_2);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(58, 260, 130, 41));
        checkBox_2->setStyleSheet(QLatin1String("QCheckBox{\n"
"	border: 0px;\n"
"	color: rgb(106, 106, 106);\n"
"	font: 75 16pt \"Helvetica\" bold;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked {\n"
"    border: 2px solid rgb(76, 76, 76);;\n"
"	border-radius: 5px;\n"
"	background:white;\n"
"}\n"
"QCheckBox::indicator:unchecked:hover {\n"
"	background:rgba(15, 128, 255, 90);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:hover {\n"
"	background:rgba(15, 128, 255, 90);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"	border: 2px solid rgb(76, 76, 76);;\n"
"	border-radius: 5px;\n"
"	background:rgba(15, 128, 255, 153);\n"
"}\n"
"\n"
"\n"
"\n"
"QCheckBox::indicator:unchecked:pressed {\n"
"	background:white;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:pressed {\n"
"	background:white;\n"
"}"));
        checkBox_2->setTristate(false);
        lineEdit_4 = new QLineEdit(page_2);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(30, 80, 180, 35));
        lineEdit_4->setStyleSheet(QLatin1String("QLineEdit{\n"
"	border: 2px solid grey;\n"
"	border-radius:10px;\n"
"	font: 75 16pt \"Helvetica\" bold;\n"
"}\n"
""));
        lineEdit_4->setMaxLength(20);
        lineEdit_4->setFrame(true);
        lineEdit_4->setAlignment(Qt::AlignCenter);
        lineEdit_4->setClearButtonEnabled(false);
        lineEdit_3 = new QLineEdit(page_2);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(30, 180, 180, 35));
        lineEdit_3->setStyleSheet(QLatin1String("QLineEdit{\n"
"	border: 2px solid grey;\n"
"	border-radius:10px;\n"
"	font: 75 16pt \"Helvetica\" bold;\n"
"	lineedit-password-mask-delay: 1000;\n"
"}\n"
""));
        lineEdit_3->setMaxLength(100);
        lineEdit_3->setEchoMode(QLineEdit::Password);
        lineEdit_3->setCursorPosition(0);
        lineEdit_3->setAlignment(Qt::AlignCenter);
        label_18 = new QLabel(page_2);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(82, 140, 91, 21));
        QFont font5;
        font5.setFamily(QStringLiteral("Helvetica 12"));
        font5.setPointSize(16);
        font5.setBold(false);
        font5.setItalic(false);
        font5.setWeight(9);
        label_18->setFont(font5);
        label_18->setStyleSheet(QLatin1String("QLabel{\n"
"	background:none;\n"
"	border: 0px;\n"
"	color: rgb(106, 106, 106);\n"
"	font: 75 16pt \"Helvetica\" bold;\n"
"}"));
        label_18->setAlignment(Qt::AlignCenter);
        label_17 = new QLabel(page_2);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(82, 40, 91, 21));
        label_17->setFont(font5);
        label_17->setStyleSheet(QLatin1String("QLabel{\n"
"	background:none;\n"
"	border: 0px;\n"
"	color: rgb(106, 106, 106);\n"
"	font: 75 16pt \"Helvetica\" bold;\n"
"}"));
        label_17->setAlignment(Qt::AlignCenter);
        horizontalLayoutWidget_2 = new QWidget(page_2);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 340, 220, 61));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_switch_2 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_switch_2->setObjectName(QStringLiteral("pushButton_switch_2"));
        pushButton_switch_2->setMinimumSize(QSize(10, 40));
        pushButton_switch_2->setFont(font1);
        pushButton_switch_2->setStyleSheet(QLatin1String("QPushButton{\n"
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
        pushButton_switch_2->setIconSize(QSize(16, 16));
        pushButton_switch_2->setFlat(false);

        horizontalLayout_3->addWidget(pushButton_switch_2);

        pushButton_quit_2 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_quit_2->setObjectName(QStringLiteral("pushButton_quit_2"));
        pushButton_quit_2->setMinimumSize(QSize(0, 40));
        pushButton_quit_2->setFont(font1);
        pushButton_quit_2->setStyleSheet(QLatin1String("QPushButton{\n"
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
        pushButton_quit_2->setFlat(false);

        horizontalLayout_3->addWidget(pushButton_quit_2);

        label_pass = new QLabel(page_2);
        label_pass->setObjectName(QStringLiteral("label_pass"));
        label_pass->setGeometry(QRect(0, 0, 1, 1));
        label_pass->setStyleSheet(QLatin1String("QLabel{\n"
"	background: none;\n"
"	border: none;\n"
"}"));
        label_19 = new QLabel(page_2);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(60, 43, 18, 16));
        label_19->setStyleSheet(QLatin1String("QLabel{\n"
"	background: white;\n"
"	border-image:none;\n"
"	border: 0px;\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 16pt \"Helvetica\" bold;\n"
"}\n"
""));
        label_19->setAlignment(Qt::AlignCenter);
        label_20 = new QLabel(page_2);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(60, 143, 18, 16));
        label_20->setStyleSheet(QLatin1String("QLabel{\n"
"	background: white;\n"
"	border-image:none;\n"
"	border: 0px;\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 16pt \"Helvetica\" bold;\n"
"}\n"
""));
        label_20->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(page_2);
        progressBar = new QProgressBar(frame);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(440, 690, 550, 10));
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
        stackedWidget_2 = new QStackedWidget(frame);
        stackedWidget_2->setObjectName(QStringLiteral("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(290, 20, 640, 510));
        stackedWidget_2->setStyleSheet(QLatin1String("QFrame{\n"
"	background: rgba(248, 248, 248, 200);\n"
"	border-image:none;\n"
"	border: 2px solid rgb(200, 200, 200);\n"
"}"));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        frame_3 = new QFrame(page_3);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(0, 0, 640, 510));
        frame_3->setStyleSheet(QLatin1String("QFrame{\n"
"	background: rgba(248, 248, 248, 200);\n"
"	border-image:none;\n"
"	border: 2px solid rgb(200, 200, 200);\n"
"}"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_showNewPortrait = new QLabel(frame_3);
        label_showNewPortrait->setObjectName(QStringLiteral("label_showNewPortrait"));
        label_showNewPortrait->setGeometry(QRect(30, 90, 440, 400));
        label_showNewPortrait->setStyleSheet(QLatin1String("QLabel{\n"
"	background: none;\n"
"	border-image:none;\n"
"	border-radius:7px;\n"
"	border: 2px solid rgb(179, 179, 179);\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 15pt \"Helvetica\" bold;\n"
"}"));
        label_showNewPortrait->setAlignment(Qt::AlignCenter);
        pushButton_addNewPortrait = new QPushButton(frame_3);
        pushButton_addNewPortrait->setObjectName(QStringLiteral("pushButton_addNewPortrait"));
        pushButton_addNewPortrait->setGeometry(QRect(80, 30, 140, 40));
        pushButton_addNewPortrait->setStyleSheet(QLatin1String("QPushButton{\n"
"	border: 2px solid rgba(15, 128, 255, 193);\n"
"	background:rgba(15, 128, 255, 93);\n"
"	border-radius:10px;\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 13pt \"Helvetica\" bold;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	border: 2px solid rgba(15, 128, 255, 193);\n"
"	background:rgba(15, 128, 255, 43);\n"
"	border-radius:10px;\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 14pt \"Helvetica\" bold;\n"
"}"));
        pushButton_confirmNewStaff = new QPushButton(frame_3);
        pushButton_confirmNewStaff->setObjectName(QStringLiteral("pushButton_confirmNewStaff"));
        pushButton_confirmNewStaff->setGeometry(QRect(250, 30, 140, 40));
        pushButton_confirmNewStaff->setStyleSheet(QLatin1String("QPushButton{\n"
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
        label_showNewPortraitPath = new QLabel(frame_3);
        label_showNewPortraitPath->setObjectName(QStringLiteral("label_showNewPortraitPath"));
        label_showNewPortraitPath->setGeometry(QRect(360, 460, 100, 20));
        pushButton_confirmNewStaff_2 = new QPushButton(frame_3);
        pushButton_confirmNewStaff_2->setObjectName(QStringLiteral("pushButton_confirmNewStaff_2"));
        pushButton_confirmNewStaff_2->setGeometry(QRect(420, 30, 140, 40));
        pushButton_confirmNewStaff_2->setStyleSheet(QLatin1String("QPushButton{\n"
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
        label_showPlate = new QLabel(frame_3);
        label_showPlate->setObjectName(QStringLiteral("label_showPlate"));
        label_showPlate->setGeometry(QRect(490, 153, 130, 50));
        label_showPlate->setStyleSheet(QLatin1String("QLabel{\n"
"	background: none;\n"
"	border-image:none;\n"
"	border-radius:7px;\n"
"	border: 2px solid rgb(179, 179, 179);\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 15pt \"Helvetica\" bold;\n"
"}"));
        label_showPlate->setAlignment(Qt::AlignCenter);
        label_21 = new QLabel(frame_3);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(516, 123, 18, 16));
        label_21->setStyleSheet(QLatin1String("QLabel{\n"
"	background: white;\n"
"	border-image:none;\n"
"	border: 0px;\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 16pt \"Helvetica\" bold;\n"
"}\n"
""));
        label_21->setAlignment(Qt::AlignCenter);
        label_22 = new QLabel(frame_3);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(543, 120, 49, 21));
        label_22->setFont(font5);
        label_22->setStyleSheet(QLatin1String("QLabel{\n"
"	background:none;\n"
"	border: 0px;\n"
"	color: rgb(106, 106, 106);\n"
"	font: 75 16pt \"Helvetica\" bold;\n"
"}"));
        label_22->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_23 = new QLabel(frame_3);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(506, 253, 18, 16));
        label_23->setStyleSheet(QLatin1String("QLabel{\n"
"	background: white;\n"
"	border-image:none;\n"
"	border: 0px;\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 16pt \"Helvetica\" bold;\n"
"}\n"
""));
        label_23->setAlignment(Qt::AlignCenter);
        label_24 = new QLabel(frame_3);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(533, 250, 70, 21));
        label_24->setFont(font5);
        label_24->setStyleSheet(QLatin1String("QLabel{\n"
"	background:none;\n"
"	border: 0px;\n"
"	color: rgb(106, 106, 106);\n"
"	font: 75 16pt \"Helvetica\" bold;\n"
"}"));
        label_24->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_showNumber = new QLabel(frame_3);
        label_showNumber->setObjectName(QStringLiteral("label_showNumber"));
        label_showNumber->setGeometry(QRect(490, 283, 130, 50));
        label_showNumber->setStyleSheet(QLatin1String("QLabel{\n"
"	background: none;\n"
"	border-image:none;\n"
"	border-radius:7px;\n"
"	border: 2px solid rgb(179, 179, 179);\n"
"	color: rgb(76, 76, 76);\n"
"	font: 15pt \"Times\" bold;\n"
"}"));
        label_showNumber->setAlignment(Qt::AlignCenter);
        label_25 = new QLabel(frame_3);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(498, 373, 18, 16));
        label_25->setStyleSheet(QLatin1String("QLabel{\n"
"	background: white;\n"
"	border-image:none;\n"
"	border: 0px;\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 16pt \"Helvetica\" bold;\n"
"}\n"
""));
        label_25->setAlignment(Qt::AlignCenter);
        label_showProbability = new QLabel(frame_3);
        label_showProbability->setObjectName(QStringLiteral("label_showProbability"));
        label_showProbability->setGeometry(QRect(490, 403, 130, 50));
        label_showProbability->setStyleSheet(QLatin1String("QLabel{\n"
"	background: none;\n"
"	border-image:none;\n"
"	border-radius:7px;\n"
"	border: 2px solid rgb(179, 179, 179);\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 15pt \"Helvetica\" bold;\n"
"}"));
        label_showProbability->setAlignment(Qt::AlignCenter);
        label_26 = new QLabel(frame_3);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(525, 370, 90, 21));
        label_26->setFont(font5);
        label_26->setStyleSheet(QLatin1String("QLabel{\n"
"	background:none;\n"
"	border: 0px;\n"
"	color: rgb(106, 106, 106);\n"
"	font: 75 16pt \"Helvetica\" bold;\n"
"}"));
        label_26->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_showNewPortraitPath->raise();
        label_showNewPortrait->raise();
        pushButton_addNewPortrait->raise();
        pushButton_confirmNewStaff->raise();
        pushButton_confirmNewStaff_2->raise();
        label_showPlate->raise();
        label_21->raise();
        label_22->raise();
        label_23->raise();
        label_24->raise();
        label_showNumber->raise();
        label_25->raise();
        label_showProbability->raise();
        label_26->raise();
        stackedWidget_2->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        label_vehicleFromPic = new QLabel(page_4);
        label_vehicleFromPic->setObjectName(QStringLiteral("label_vehicleFromPic"));
        label_vehicleFromPic->setGeometry(QRect(10, 10, 200, 200));
        label_vehicleFromPic->setStyleSheet(QLatin1String("QLabel{\n"
"	background: none;\n"
"	border-image:none;\n"
"	border-radius:7px;\n"
"	border: 2px solid rgb(179, 179, 179);\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 15pt \"Helvetica\" bold;\n"
"}"));
        label_vehicleTarPic = new QLabel(page_4);
        label_vehicleTarPic->setObjectName(QStringLiteral("label_vehicleTarPic"));
        label_vehicleTarPic->setGeometry(QRect(10, 260, 200, 200));
        label_vehicleTarPic->setStyleSheet(QLatin1String("QLabel{\n"
"	background: none;\n"
"	border-image:none;\n"
"	border-radius:7px;\n"
"	border: 2px solid rgb(179, 179, 179);\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 15pt \"Helvetica\" bold;\n"
"}"));
        label_EnterHighwayTimeTip = new QLabel(page_4);
        label_EnterHighwayTimeTip->setObjectName(QStringLiteral("label_EnterHighwayTimeTip"));
        label_EnterHighwayTimeTip->setGeometry(QRect(240, 10, 140, 40));
        label_EnterHighwayTimeTip->setStyleSheet(QLatin1String("QLabel{\n"
"	background: none;\n"
"	border-image:none;\n"
"	border-radius:7px;\n"
"	border: 2px solid rgb(179, 179, 179);\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 15pt \"Helvetica\" bold;\n"
"}\n"
""));
        label_EnterHighwayTimeTip_2 = new QLabel(page_4);
        label_EnterHighwayTimeTip_2->setObjectName(QStringLiteral("label_EnterHighwayTimeTip_2"));
        label_EnterHighwayTimeTip_2->setGeometry(QRect(250, 260, 140, 40));
        label_EnterHighwayTimeTip_2->setStyleSheet(QLatin1String("QLabel{\n"
"	background: none;\n"
"	border-image:none;\n"
"	border-radius:7px;\n"
"	border: 2px solid rgb(179, 179, 179);\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 15pt \"Helvetica\" bold;\n"
"}"));
        dateTimeEdit_vehicleFromDatetime = new QDateTimeEdit(page_4);
        dateTimeEdit_vehicleFromDatetime->setObjectName(QStringLiteral("dateTimeEdit_vehicleFromDatetime"));
        dateTimeEdit_vehicleFromDatetime->setGeometry(QRect(240, 95, 140, 30));
        dateTimeEdit_vehicleFromDatetime->setStyleSheet(QString::fromUtf8("QdateTimeEdit{\n"
"rgb(102, 255, 204);\n"
"font: 57 9pt \"Helvetica-Narrow-Bold\";\n"
"background-color: rgba(100, 225, 100, 30);/*\350\203\214\346\231\257\350\211\262*/\n"
"     border-style: outset; /*\350\276\271\346\241\206\346\240\267\345\274\217*/\n"
"     border-width: 4px;  /*\350\276\271\346\241\206\345\256\275\345\272\246\344\270\2724\345\203\217\347\264\240*/\n"
"     border-radius: 10px; /*\350\276\271\346\241\206\345\234\206\350\247\222\345\215\212\345\276\204*/\n"
"     border-color: rgba(255, 225, 255, 30);/*\350\276\271\346\241\206\351\242\234\350\211\262*/\n"
"}"));
        dateTimeEdit_vehicleTarDateTime = new QDateTimeEdit(page_4);
        dateTimeEdit_vehicleTarDateTime->setObjectName(QStringLiteral("dateTimeEdit_vehicleTarDateTime"));
        dateTimeEdit_vehicleTarDateTime->setGeometry(QRect(250, 345, 140, 30));
        dateTimeEdit_vehicleTarDateTime->setStyleSheet(QString::fromUtf8("QdateTimeEdit{\n"
"rgb(102, 255, 204);\n"
"font: 57 9pt \"Helvetica-Narrow-Bold\";\n"
"background-color: rgba(100, 225, 100, 30);/*\350\203\214\346\231\257\350\211\262*/\n"
"     border-style: outset; /*\350\276\271\346\241\206\346\240\267\345\274\217*/\n"
"     border-width: 4px;  /*\350\276\271\346\241\206\345\256\275\345\272\246\344\270\2724\345\203\217\347\264\240*/\n"
"     border-radius: 10px; /*\350\276\271\346\241\206\345\234\206\350\247\222\345\215\212\345\276\204*/\n"
"     border-color: rgba(255, 225, 255, 30);/*\350\276\271\346\241\206\351\242\234\350\211\262*/\n"
"}"));
        pushButton_EnterhighwayPic = new QPushButton(page_4);
        pushButton_EnterhighwayPic->setObjectName(QStringLiteral("pushButton_EnterhighwayPic"));
        pushButton_EnterhighwayPic->setGeometry(QRect(240, 170, 140, 40));
        pushButton_EnterhighwayPic->setStyleSheet(QLatin1String("QPushButton{\n"
"	border: 2px solid rgba(15, 128, 255, 193);\n"
"	background:rgba(15, 128, 255, 93);\n"
"	border-radius:10px;\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 13pt \"Helvetica\" bold;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	border: 2px solid rgba(15, 128, 255, 193);\n"
"	background:rgba(15, 128, 255, 43);\n"
"	border-radius:10px;\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 14pt \"Helvetica\" bold;\n"
"}"));
        pushButton_leaveHighwayPic = new QPushButton(page_4);
        pushButton_leaveHighwayPic->setObjectName(QStringLiteral("pushButton_leaveHighwayPic"));
        pushButton_leaveHighwayPic->setGeometry(QRect(250, 420, 140, 40));
        pushButton_leaveHighwayPic->setStyleSheet(QLatin1String("QPushButton{\n"
"	border: 2px solid rgba(15, 128, 255, 193);\n"
"	background:rgba(15, 128, 255, 93);\n"
"	border-radius:10px;\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 13pt \"Helvetica\" bold;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	border: 2px solid rgba(15, 128, 255, 193);\n"
"	background:rgba(15, 128, 255, 43);\n"
"	border-radius:10px;\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 14pt \"Helvetica\" bold;\n"
"}"));
        label_withoutETCwarning = new QLabel(page_4);
        label_withoutETCwarning->setObjectName(QStringLiteral("label_withoutETCwarning"));
        label_withoutETCwarning->setGeometry(QRect(450, 10, 140, 40));
        label_withoutETCwarning->setStyleSheet(QLatin1String("QLabel{\n"
"	background: none;\n"
"	border-image:none;\n"
"	border-radius:7px;\n"
"	border: 2px solid rgb(179, 179, 179);\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 15pt \"Helvetica\" bold;\n"
"}\n"
""));
        stackedWidget_2->addWidget(page_4);
        progressBar_2 = new QProgressBar(frame);
        progressBar_2->setObjectName(QStringLiteral("progressBar_2"));
        progressBar_2->setGeometry(QRect(370, 540, 480, 10));
        progressBar_2->setStyleSheet(QLatin1String("QProgressBar::chunk {\n"
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
        progressBar_2->setValue(0);
        progressBar_2->setTextVisible(false);
        SubClient->setCentralWidget(centralWidget);

        retranslateUi(SubClient);

        stackedWidget->setCurrentIndex(0);
        pushButton_switch->setDefault(true);
        pushButton_switch_2->setDefault(true);
        stackedWidget_2->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(SubClient);
    } // setupUi

    void retranslateUi(QMainWindow *SubClient)
    {
        SubClient->setWindowTitle(QApplication::translate("SubClient", "SubClient", Q_NULLPTR));
        label_2->setText(QApplication::translate("SubClient", "Please Login", Q_NULLPTR));
        label_5->setText(QApplication::translate("SubClient", "Pic", Q_NULLPTR));
        pushButton_switch->setText(QApplication::translate("SubClient", "Switch", Q_NULLPTR));
        pushButton_quit->setText(QApplication::translate("SubClient", "Quit", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("SubClient", "  Profile  ", Q_NULLPTR));
        label_3->setText(QApplication::translate("SubClient", "Name: ", Q_NULLPTR));
        label_4->setText(QApplication::translate("SubClient", "-", Q_NULLPTR));
        label_7->setText(QApplication::translate("SubClient", "Status:", Q_NULLPTR));
        label_8->setText(QApplication::translate("SubClient", "-", Q_NULLPTR));
        label->setText(QApplication::translate("SubClient", "TextLabel", Q_NULLPTR));
        label_9->setText(QApplication::translate("SubClient", "TextLabel", Q_NULLPTR));
        label_10->setText(QApplication::translate("SubClient", "TextLabel", Q_NULLPTR));
        label_11->setText(QApplication::translate("SubClient", "Gender:", Q_NULLPTR));
        label_12->setText(QApplication::translate("SubClient", "-", Q_NULLPTR));
        label_13->setText(QApplication::translate("SubClient", "Email", Q_NULLPTR));
        label_14->setText(QApplication::translate("SubClient", "aaa@", Q_NULLPTR));
        label_15->setText(QApplication::translate("SubClient", "Email", Q_NULLPTR));
        pushButton_A->setText(QString());
        pushButton_B->setText(QString());
        checkBox_2->setText(QApplication::translate("SubClient", "   Remember\n"
"   Password", Q_NULLPTR));
        label_18->setText(QApplication::translate("SubClient", "Password", Q_NULLPTR));
        label_17->setText(QApplication::translate("SubClient", "Username", Q_NULLPTR));
        pushButton_switch_2->setText(QApplication::translate("SubClient", "Login", Q_NULLPTR));
        pushButton_quit_2->setText(QApplication::translate("SubClient", "Quit", Q_NULLPTR));
        label_pass->setText(QString());
        label_19->setText(QApplication::translate("SubClient", "TextLabel", Q_NULLPTR));
        label_20->setText(QApplication::translate("SubClient", "TextLabel", Q_NULLPTR));
        label_showNewPortrait->setText(QApplication::translate("SubClient", "Preview", Q_NULLPTR));
        pushButton_addNewPortrait->setText(QApplication::translate("SubClient", "Choose your\n"
"plate picture", Q_NULLPTR));
        pushButton_confirmNewStaff->setText(QApplication::translate("SubClient", "Confirm", Q_NULLPTR));
        label_showNewPortraitPath->setText(QString());
        pushButton_confirmNewStaff_2->setText(QApplication::translate("SubClient", "Clear", Q_NULLPTR));
        label_showPlate->setText(QString());
        label_21->setText(QApplication::translate("SubClient", "TextLabel", Q_NULLPTR));
        label_22->setText(QApplication::translate("SubClient", "Plate:", Q_NULLPTR));
        label_23->setText(QApplication::translate("SubClient", "TextLabel", Q_NULLPTR));
        label_24->setText(QApplication::translate("SubClient", "Number:", Q_NULLPTR));
        label_showNumber->setText(QString());
        label_25->setText(QApplication::translate("SubClient", "TextLabel", Q_NULLPTR));
        label_showProbability->setText(QString());
        label_26->setText(QApplication::translate("SubClient", "Probability:", Q_NULLPTR));
        label_vehicleFromPic->setText(QApplication::translate("SubClient", "Enter Highway Picture", Q_NULLPTR));
        label_vehicleTarPic->setText(QApplication::translate("SubClient", "Leave Highway Picture", Q_NULLPTR));
        label_EnterHighwayTimeTip->setText(QApplication::translate("SubClient", "Enter highway time:", Q_NULLPTR));
        label_EnterHighwayTimeTip_2->setText(QApplication::translate("SubClient", "Enter highway time:", Q_NULLPTR));
        pushButton_EnterhighwayPic->setText(QApplication::translate("SubClient", "Enter highway picture", Q_NULLPTR));
        pushButton_leaveHighwayPic->setText(QApplication::translate("SubClient", "Leave highway picture", Q_NULLPTR));
        label_withoutETCwarning->setText(QApplication::translate("SubClient", "Enter highway time:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SubClient: public Ui_SubClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBCLIENT_H
