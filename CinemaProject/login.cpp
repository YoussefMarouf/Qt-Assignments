#include "login.h"
#include "ui_login.h"
#include "users.h"
#include "welcomewindow.h"
#include "registerwindow.h"
Login::Login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
    ui->label_Error->setVisible(0);

}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButton_Login_clicked()
{

    for(int i =0 ;i< UsersCount;i++){
        if(ui->LineEdit_Username->text() == usernames[i] && ui->LineEdit_Password->text() == passwords[i] )
        {
            WelcomeWindow* w=new WelcomeWindow(this);
            hide();
            w->setname(ui->LineEdit_Username->text());
            w->show();
        }
    else
        {
            ui->label_Error->setVisible(1);
        }
    }
}


void Login::on_pushButton_2_clicked()
{


    RegisterWindow* r=new RegisterWindow(this);
    hide();
    r->show();
}

