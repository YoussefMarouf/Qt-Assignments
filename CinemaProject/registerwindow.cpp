#include "registerwindow.h"
#include "ui_registerwindow.h"

RegisterWindow::RegisterWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RegisterWindow)
{
    ui->setupUi(this);
    ui->label_error1->setVisible(0);
    ui->label_error2->setVisible(0);
    ui->label_error3->setVisible(0);
    ui->label_error4->setVisible(0);
}

RegisterWindow::~RegisterWindow()
{
    delete ui;
}
