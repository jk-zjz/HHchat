#ifndef REGISTERDIALOG_H
#define REGISTERDIALOG_H

/***************************************************************
*  @FileName:   registerdialog.h
*  @Brief:      注册界面
*  @Author:     HH
*  @Date:       2024-09-01
****************************************************************/

#include <QDialog>

namespace Ui {
class registerDialog;
}

class registerDialog : public QDialog
{
    Q_OBJECT

public:
    explicit registerDialog(QWidget *parent = nullptr);
    ~registerDialog();
signals:
    void  switchlogin();
private:
    Ui::registerDialog *ui;
};

#endif // REGISTERDIALOG_H
