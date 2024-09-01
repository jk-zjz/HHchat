#ifndef MAINWINDOW_H
#define MAINWINDOW_H

/***************************************************************
*  @FileName:   mainwindow.h
*  @Brief:      主窗口
*  @Author:     HH
*  @Date:       2024-09-01
****************************************************************/

#include <QMainWindow>
#include "logindialog.h"
#include "registerdialog.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

// 刚刚槽函数
public slots:
    void SlotSwitchReg();
    void SlotSwitchLog();
private:
    Ui::MainWindow *ui;
    LoginDialog * _login_dlg;       // 登陆界面
    registerDialog * _register_dlg; // 注册界面
};
#endif // MAINWINDOW_H
