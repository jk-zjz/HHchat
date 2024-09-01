#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    _login_dlg = new LoginDialog();         // 创建登陆窗口
    _register_dlg = new registerDialog();   // 创建注册窗口
    setCentralWidget(_login_dlg);           // 设置显示窗口为登陆
    _login_dlg->show();                     // 显示

    connect(_login_dlg,&LoginDialog::switchRegister,this,&MainWindow::SlotSwitchReg);
    connect(_register_dlg,&registerDialog::switchlogin,this,&MainWindow::SlotSwitchLog);
}

// 释放
MainWindow::~MainWindow()
{
    if(_login_dlg){
        delete _login_dlg;
        _login_dlg = nullptr;
    }
    if(_register_dlg){
        delete _register_dlg;
        _register_dlg = nullptr;
    }
    delete ui;
}

// 登陆界面切换注册
void MainWindow::SlotSwitchReg()
{
    setCentralWidget(_register_dlg);
    _login_dlg->hide();
    _register_dlg->show();
}

void MainWindow::SlotSwitchLog()
{
    qDebug()<<"sd";
    // setCentralWidget(_login_dlg);
    // _register_dlg->hide();
    // _login_dlg->show();
}
