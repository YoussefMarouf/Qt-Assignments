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
    ui->comboBox_Day->addItems({"1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31"});
    ui->comboBox_Month->addItems({"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"});
    ui->comboBox_Year->addItems({"2024","2023","2022","2021","2020","2019","2018","2017","2016","2015","2014","2013","2012","2011","2010","2009","2008","2007","2006","2005","2004","2003","2002","2001","2000"});
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

