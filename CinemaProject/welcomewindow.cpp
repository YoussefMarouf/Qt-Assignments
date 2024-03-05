#include "welcomewindow.h"
#include "ui_welcomewindow.h"
#include "login.h"
#include <QString>
#include <QPixmap>
WelcomeWindow::WelcomeWindow(QWidget *parent,QString name ,int age)
    : QDialog(parent)
    , ui(new Ui::WelcomeWindow)
{
    ui->setupUi(this);
    QPixmap pix ("D:\Qt-Assignments\Qt-Assignments\CinemaProject\Imgs\Cinema.jpg");
    QString str = QString :: number ( age );
    ui->label_welcome->setText("Hello, "  + name + " " + str );
    int w=ui->label_image->width();
    int h=ui->label_image->height();
    ui->label_image->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
}

WelcomeWindow::~WelcomeWindow()
{
    delete ui;
}


void WelcomeWindow::on_pushButton_clicked()
{
    Login* l=new Login(this);
    l->show();
    hide();

}

