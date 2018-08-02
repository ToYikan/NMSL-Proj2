/********************************************************************************
** Form generated from reading UI file 'forgetpassword.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORGETPASSWORD_H
#define UI_FORGETPASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ForgetPassword
{
public:
    QFrame *frame_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QLineEdit *lineEdit_3;
    QLabel *label_3;
    QLineEdit *lineEdit_4;
    QLabel *label_4;
    QGroupBox *groupBox_2;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QLabel *label_5;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit_5;
    QFrame *line;
    QFrame *titlepic;

    void setupUi(QWidget *ForgetPassword)
    {
        if (ForgetPassword->objectName().isEmpty())
            ForgetPassword->setObjectName(QStringLiteral("ForgetPassword"));
        ForgetPassword->resize(531, 656);
        frame_2 = new QFrame(ForgetPassword);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(10, 10, 511, 635));
        frame_2->setStyleSheet(QLatin1String("\n"
"QFrame{\n"
"	background: rgba(248, 248, 248, 220);\n"
"	border: 2px solid rgb(102, 102, 102);\n"
"}\n"
""));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayoutWidget = new QWidget(frame_2);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(370, 360, 111, 101));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(10, 40));
        QFont font;
        font.setFamily(QStringLiteral("Helvetica 12"));
        font.setPointSize(15);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QLatin1String("QPushButton{\n"
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
        pushButton_2->setIconSize(QSize(16, 16));
        pushButton_2->setFlat(false);

        verticalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(0, 40));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QLatin1String("QPushButton{\n"
"	border: 2px solid rgb(179, 179, 179);\n"
"	border-radius:15px;\n"
"	background:rgba(244, 244, 244, 20);\n"
"\n"
"\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 15pt \"Helvetica\" bold ;\n"
"}\n"
"\n"
"\n"
"QPushButton:hover{\n"
"	border: 2px solid rgb(179, 179, 179);\n"
"	border-radius:15px;\n"
"	background:rgb(240, 240, 240);\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 15pt \"Helvetica\" bold ;\n"
"}\n"
""));
        pushButton->setFlat(false);

        verticalLayout->addWidget(pushButton);

        groupBox = new QGroupBox(frame_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(160, 485, 321, 130));
        groupBox->setStyleSheet(QLatin1String("QGroupBox{\n"
"	border: 2px solid rgb(200, 200, 200);\n"
"	border-radius:20px;\n"
"	background: rgba(248, 248, 248, 210);\n"
"	margin-top: 11 px;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"	background: rgb(248, 248, 248);\n"
"	subcontrol-origin: margin;\n"
"	subcontrol-position: top center;	\n"
"	padding: 3 1px;\n"
"	color: rgba(15, 128, 255, 193);\n"
"	border: 2px solid rgba(15, 128, 255, 193);\n"
"	border-radius:10px;\n"
"}"));
        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(130, 28, 170, 35));
        lineEdit_3->setStyleSheet(QLatin1String("QLineEdit{\n"
"	border: 2px solid rgb(127, 127, 127);\n"
"	border-radius:10px;\n"
"	font: 75 16pt \"Helvetica\" bold;\n"
"	lineedit-password-mask-delay: 500;\n"
"}\n"
""));
        lineEdit_3->setMaxLength(20);
        lineEdit_3->setFrame(true);
        lineEdit_3->setEchoMode(QLineEdit::Password);
        lineEdit_3->setAlignment(Qt::AlignCenter);
        lineEdit_3->setClearButtonEnabled(false);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 35, 111, 21));
        QFont font1;
        font1.setFamily(QStringLiteral("Helvetica 12"));
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(9);
        label_3->setFont(font1);
        label_3->setStyleSheet(QLatin1String("QLabel{\n"
"	background: none;\n"
"	border: 0px;\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 16pt \"Helvetica\" bold;\n"
"}"));
        label_3->setAlignment(Qt::AlignCenter);
        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(130, 78, 170, 35));
        lineEdit_4->setStyleSheet(QLatin1String("QLineEdit{\n"
"	border: 2px solid rgb(127, 127, 127);\n"
"	border-radius:10px;\n"
"	font: 75 16pt \"Helvetica\" bold;\n"
"	lineedit-password-mask-delay: 500;\n"
"}\n"
""));
        lineEdit_4->setMaxLength(20);
        lineEdit_4->setEchoMode(QLineEdit::Password);
        lineEdit_4->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 84, 111, 21));
        label_4->setFont(font1);
        label_4->setStyleSheet(QLatin1String("QLabel{\n"
"	background: none;\n"
"	border: 0px;\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 16pt \"Helvetica\" bold;\n"
"}"));
        label_4->setAlignment(Qt::AlignCenter);
        groupBox_2 = new QGroupBox(frame_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(30, 335, 320, 130));
        groupBox_2->setStyleSheet(QLatin1String("QGroupBox{\n"
"	border: 2px solid rgb(200, 200, 200);\n"
"	border-radius:20px;\n"
"	background: rgba(248, 248, 248, 210);\n"
"	margin-top: 11 px;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"	background: rgb(248, 248, 248);\n"
"	subcontrol-origin: margin;\n"
"	subcontrol-position: top center;	\n"
"	padding: 3 1px;\n"
"	color: rgba(15, 128, 255, 193);\n"
"	border: 2px solid rgba(15, 128, 255, 193);\n"
"	border-radius:10px;\n"
"}"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 84, 121, 21));
        label_2->setFont(font1);
        label_2->setStyleSheet(QLatin1String("QLabel{\n"
"	background: none;\n"
"	border: 0px;\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 16pt \"Helvetica\" bold;\n"
"}"));
        label_2->setAlignment(Qt::AlignCenter);
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 35, 121, 21));
        label->setFont(font1);
        label->setStyleSheet(QLatin1String("QLabel{\n"
"	background: none;\n"
"	border: 0px;\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 16pt \"Helvetica\" bold;\n"
"}"));
        label->setAlignment(Qt::AlignCenter);
        lineEdit_2 = new QLineEdit(groupBox_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(130, 78, 170, 35));
        lineEdit_2->setStyleSheet(QLatin1String("QLineEdit{\n"
"	border: 2px solid rgb(127, 127, 127);\n"
"	border-radius:10px;\n"
"	font: 75 14pt \"Helvetica\" bold;\n"
"}\n"
""));
        lineEdit_2->setMaxLength(30);
        lineEdit_2->setEchoMode(QLineEdit::Normal);
        lineEdit_2->setAlignment(Qt::AlignCenter);
        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(130, 28, 170, 35));
        lineEdit->setStyleSheet(QLatin1String("QLineEdit{\n"
"	border: 2px solid rgb(127, 127, 127);\n"
"	border-radius:10px;\n"
"	font: 75 16pt \"Helvetica\" bold;\n"
"}\n"
""));
        lineEdit->setMaxLength(20);
        lineEdit->setFrame(true);
        lineEdit->setAlignment(Qt::AlignCenter);
        lineEdit->setClearButtonEnabled(false);
        label_5 = new QLabel(frame_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 495, 111, 21));
        label_5->setFont(font);
        label_5->setStyleSheet(QLatin1String("QLabel{\n"
"	background: none;\n"
"	border: 0px;\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 15pt \"Helvetica\" bold;\n"
"}"));
        label_5->setAlignment(Qt::AlignCenter);
        pushButton_3 = new QPushButton(frame_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(30, 567, 111, 41));
        pushButton_3->setMinimumSize(QSize(0, 30));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QLatin1String("QPushButton{\n"
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
        pushButton_3->setIconSize(QSize(16, 16));
        pushButton_3->setFlat(false);
        lineEdit_5 = new QLineEdit(frame_2);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(30, 518, 111, 35));
        lineEdit_5->setStyleSheet(QLatin1String("QLineEdit{\n"
"	border: 2px solid rgb(127, 127, 127);\n"
"	border-radius:10px;\n"
"background: rgba(248, 248, 248, 210);\n"
"	font: 75 16pt \"Helvetica\" bold;\n"
"}\n"
""));
        lineEdit_5->setMaxLength(20);
        lineEdit_5->setEchoMode(QLineEdit::Normal);
        lineEdit_5->setAlignment(Qt::AlignCenter);
        line = new QFrame(frame_2);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(2, 480, 507, 2));
        line->setStyleSheet(QStringLiteral("border: 1px solid white;"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        titlepic = new QFrame(frame_2);
        titlepic->setObjectName(QStringLiteral("titlepic"));
        titlepic->setGeometry(QRect(10, 10, 491, 324));
        titlepic->setAutoFillBackground(false);
        titlepic->setStyleSheet(QStringLiteral(""));
        titlepic->setFrameShape(QFrame::StyledPanel);
        titlepic->setFrameShadow(QFrame::Raised);
        QWidget::setTabOrder(lineEdit, lineEdit_2);
        QWidget::setTabOrder(lineEdit_2, lineEdit_3);
        QWidget::setTabOrder(lineEdit_3, lineEdit_4);
        QWidget::setTabOrder(lineEdit_4, lineEdit_5);
        QWidget::setTabOrder(lineEdit_5, pushButton_3);
        QWidget::setTabOrder(pushButton_3, pushButton);
        QWidget::setTabOrder(pushButton, pushButton_2);

        retranslateUi(ForgetPassword);

        pushButton_2->setDefault(true);
        pushButton_3->setDefault(true);


        QMetaObject::connectSlotsByName(ForgetPassword);
    } // setupUi

    void retranslateUi(QWidget *ForgetPassword)
    {
        ForgetPassword->setWindowTitle(QApplication::translate("ForgetPassword", "Form", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("ForgetPassword", "Send Code", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ForgetPassword", "Back", Q_NULLPTR));
        groupBox->setTitle(QString());
        label_3->setText(QApplication::translate("ForgetPassword", "New Pwd", Q_NULLPTR));
        lineEdit_4->setText(QString());
        label_4->setText(QApplication::translate("ForgetPassword", "Repeat", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        label_2->setText(QApplication::translate("ForgetPassword", "Email", Q_NULLPTR));
        label->setText(QApplication::translate("ForgetPassword", "Username", Q_NULLPTR));
        label_5->setText(QApplication::translate("ForgetPassword", "Security Code", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("ForgetPassword", "Submit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ForgetPassword: public Ui_ForgetPassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORGETPASSWORD_H
