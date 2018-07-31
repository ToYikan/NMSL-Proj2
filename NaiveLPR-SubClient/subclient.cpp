#include "subclient.h"
#include "ui_subclient.h"

SubClient::SubClient(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SubClient)
{
    ui->setupUi(this);
}

SubClient::~SubClient()
{
    delete ui;
}
