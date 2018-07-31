#ifndef MAINCLIENT_H
#define MAINCLIENT_H

#include <QMainWindow>

namespace Ui {
class MainClient;
}

class MainClient : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainClient(QWidget *parent = 0);
    ~MainClient();

private:
    Ui::MainClient *ui;
};

#endif // MAINCLIENT_H
