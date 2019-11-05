#ifndef SSHMAINWINDOW_H
#define SSHMAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class SSHMainWindow; }
QT_END_NAMESPACE

class SSHMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    SSHMainWindow(QWidget *parent = nullptr);
    ~SSHMainWindow();

private:
    Ui::SSHMainWindow *ui;
};
#endif // SSHMAINWINDOW_H
