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

void RegisterWindow::on_pushButton_clicked()
{
    QString un=ui->lineEdit_Username->text();
    QString pass=ui->lineEdit_password->text();
    QString repass=ui->lineEdit_password->text();
    QString day=ui->comboBox_Day->currentText();
    QString month=ui->comboBox_Month->currentText();
    QString year=ui->comboBox_Year->currentText();
    bool male=ui->radioButton_Male->isChecked();
    bool female=ui->radioButton_Female->isChecked();
    bool admin=ui->radioButton_Admin->isChecked();
    bool user=ui->radioButton_User->isChecked();
    bool action=ui->checkBox_Action->isChecked();
    bool comedy=ui->checkBox_Comedy->isChecked();
    bool drama=ui->checkBox_Drama->isChecked();
    bool romance=ui->checkBox_Romance->isChecked();
    bool horror=ui->checkBox_Horror->isChecked();
    bool other=ui->checkBox_Other->isChecked();


}

