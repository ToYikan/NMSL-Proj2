#ifndef SUBCLIENT_H
#define SUBCLIENT_H

#include <QMainWindow>

namespace Ui {
class SubClient;
}

class SubClient : public QMainWindow
{
    Q_OBJECT

public:
    explicit SubClient(QWidget *parent = 0);
    ~SubClient();

private:
    Ui::SubClient *ui;
};

#endif // SUBCLIENT_H
