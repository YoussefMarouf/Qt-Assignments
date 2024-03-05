#include "welcomewindow.h"
#include "ui_welcomewindow.h"
#include "login.h"
#include <QString>
WelcomeWindow::WelcomeWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::WelcomeWindow)
{
    ui->setupUi(this);

}

WelcomeWindow::~WelcomeWindow()
{
    delete ui;
}
void WelcomeWindow::setname(QString n)
{
ui->label_welcome->setText("HEllo, "  + n);
}

void WelcomeWindow::on_pushButton_clicked()
{
    Login* l=new Login(this);
    l->show();
    hide();

}

