#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
// #include "registerdialog.h"
/***************************************************************
*  @FileName:   logindialog.h
*  @Brief:      登陆窗口
*  @Author:     HH
*  @Date:       2024-09-01
****************************************************************/
namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = nullptr);
    ~LoginDialog();
signals:
    void switchRegister();
private:
    Ui::LoginDialog *ui;
};

#endif // LOGINDIALOG_H
