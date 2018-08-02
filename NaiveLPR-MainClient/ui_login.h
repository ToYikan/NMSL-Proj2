/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QFrame *titlepic;
    QFrame *frame_2;
    QFrame *frame_3;
    QCheckBox *checkBox;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QLabel *label_pass;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(601, 561);
        Login->setStyleSheet(QStringLiteral(""));
        titlepic = new QFrame(Login);
        titlepic->setObjectName(QStringLiteral("titlepic"));
        titlepic->setGeometry(QRect(20, 20, 561, 391));
        titlepic->setAutoFillBackground(false);
        titlepic->setStyleSheet(QStringLiteral(""));
        titlepic->setFrameShape(QFrame::StyledPanel);
        titlepic->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(Login);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(10, 10, 581, 542));
        frame_2->setStyleSheet(QLatin1String("QFrame{\n"
"	background: rgba(248, 248, 248, 220);\n"
"	border: 2px solid rgb(102, 102, 102);\n"
"}"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(36, 412, 361, 113));
        frame_3->setStyleSheet(QLatin1String("QFrame{\n"
"	border: 2px solid rgb(200, 200, 200);\n"
"	border-radius:20px;\n"
"	background: rgba(248, 248, 248, 210);\n"
"}"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        checkBox = new QCheckBox(frame_3);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(255, 70, 81, 20));
        checkBox->setStyleSheet(QLatin1String("QCheckBox{\n"
"	border: 0px;\n"
"	color: rgb(106, 106, 106);\n"
"	font: 75 13pt \"Helvetica\" bold;\n"
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
        checkBox->setTristate(false);
        lineEdit_2 = new QLineEdit(frame_3);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(115, 62, 121, 35));
        lineEdit_2->setStyleSheet(QLatin1String("QLineEdit{\n"
"	border: 2px solid grey;\n"
"	border-radius:10px;\n"
"	font: 75 16pt \"Helvetica\" bold;\n"
"	lineedit-password-mask-delay: 1000;\n"
"}\n"
""));
        lineEdit_2->setMaxLength(100);
        lineEdit_2->setEchoMode(QLineEdit::Password);
        lineEdit_2->setCursorPosition(0);
        lineEdit_2->setAlignment(Qt::AlignCenter);
        label = new QLabel(frame_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(15, 21, 91, 21));
        QFont font;
        font.setFamily(QStringLiteral("Helvetica 12"));
        font.setPointSize(16);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("QLabel{\n"
"	border: 0px;\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 16pt \"Helvetica\" bold;\n"
"	background:none;\n"
"}"));
        label->setAlignment(Qt::AlignCenter);
        lineEdit = new QLineEdit(frame_3);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(115, 15, 221, 35));
        lineEdit->setStyleSheet(QLatin1String("QLineEdit{\n"
"	border: 2px solid grey;\n"
"	border-radius:10px;\n"
"	font: 75 16pt \"Helvetica\" bold;\n"
"}\n"
""));
        lineEdit->setMaxLength(20);
        lineEdit->setFrame(true);
        lineEdit->setAlignment(Qt::AlignCenter);
        lineEdit->setClearButtonEnabled(false);
        label_2 = new QLabel(frame_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(15, 66, 91, 21));
        label_2->setFont(font);
        label_2->setStyleSheet(QLatin1String("QLabel{\n"
"	border: 0px;\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 16pt \"Helvetica\" bold;\n"
"	background:none;\n"
"}"));
        label_2->setAlignment(Qt::AlignCenter);
        verticalLayoutWidget = new QWidget(frame_2);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(421, 420, 131, 111));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(10, 40));
        QFont font1;
        font1.setFamily(QStringLiteral("Helvetica 12"));
        font1.setPointSize(15);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(9);
        pushButton_2->setFont(font1);
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
"	background:rgba(15, 128, 255, 30);\n"
"	border-radius:10px;\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 15pt \"Helvetica\" bold;\n"
"}"));
        pushButton_2->setIconSize(QSize(16, 16));
        pushButton_2->setFlat(false);

        verticalLayout->addWidget(pushButton_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(15);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(12, 0, 5, 5);
        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(0, 40));
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QLatin1String("QPushButton{\n"
"	border: 2px dashed rgb(179, 179, 179);\n"
"	border-radius:10px;\n"
"	background:rgba(204, 204, 204, 73);\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 15pt \"Helvetica\" bold ;\n"
"}"));
        pushButton_3->setFlat(false);

        horizontalLayout->addWidget(pushButton_3);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(0, 40));
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QLatin1String("QPushButton{\n"
"	border: 2px solid rgb(179, 179, 179);\n"
"	border-radius:15px;\n"
"	background:rgba(244, 244, 244, 20);\n"
"\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 15pt \"Helvetica\" bold ;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	border: 2px solid rgb(179, 179, 179);\n"
"	border-radius:15px;\n"
"	background:white;\n"
"	color: rgb(76, 76, 76);\n"
"	font: 75 15pt \"Helvetica\" bold ;\n"
"}"));
        pushButton->setFlat(false);

        horizontalLayout->addWidget(pushButton);

        horizontalLayout->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout);

        label_pass = new QLabel(frame_2);
        label_pass->setObjectName(QStringLiteral("label_pass"));
        label_pass->setGeometry(QRect(460, 400, 1, 1));
        label_pass->setStyleSheet(QLatin1String("QLabel{\n"
"	background: none;\n"
"	border: none;\n"
"}"));
        frame_2->raise();
        titlepic->raise();
        QWidget::setTabOrder(lineEdit, lineEdit_2);
        QWidget::setTabOrder(lineEdit_2, checkBox);
        QWidget::setTabOrder(checkBox, pushButton_2);
        QWidget::setTabOrder(pushButton_2, pushButton_3);
        QWidget::setTabOrder(pushButton_3, pushButton);

        retranslateUi(Login);

        pushButton_2->setDefault(true);


        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Home", Q_NULLPTR));
        checkBox->setText(QApplication::translate("Login", " REMPAS", Q_NULLPTR));
        label->setText(QApplication::translate("Login", "Username", Q_NULLPTR));
        label_2->setText(QApplication::translate("Login", "Password", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Login", "Login", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Login", "icon", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Login", "Quit", Q_NULLPTR));
        label_pass->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
