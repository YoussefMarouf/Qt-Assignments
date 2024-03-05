#ifndef WELCOMEWINDOW_H
#define WELCOMEWINDOW_H

#include <QDialog>
#include <QString>

namespace Ui {
class WelcomeWindow;
}

class WelcomeWindow : public QDialog
{
    Q_OBJECT

public:
    explicit WelcomeWindow(QWidget *parent = nullptr);
    void setname(QString n);
    ~WelcomeWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::WelcomeWindow *ui;
};

#endif // WELCOMEWINDOW_H
