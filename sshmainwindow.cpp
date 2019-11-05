#include "sshmainwindow.h"
#include "./ui_sshmainwindow.h"

SSHMainWindow::SSHMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SSHMainWindow)
{
    ui->setupUi(this);
}

SSHMainWindow::~SSHMainWindow()
{
    delete ui;
}

