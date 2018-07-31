#include "mainclient.h"
#include "ui_mainclient.h"

MainClient::MainClient(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainClient)
{
    ui->setupUi(this);

    this->setAttribute(Qt::WA_DeleteOnClose);
    this->setWindowFlags(Qt::FramelessWindowHint|Qt::WindowMinimizeButtonHint);
    this->setAttribute(Qt::WA_TranslucentBackground);
    this->setStyleSheet("QFrame{border-radius:10px;}");
    move(150,30);
}

MainClient::~MainClient()
{
    delete ui;
}
