#include "registerdialog.h"
#include "ui_registerdialog.h"

registerDialog::registerDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::registerDialog)
{
    ui->setupUi(this);
    connect(ui->not_but,&QPushButton::clicked,this,&registerDialog::switchlogin);
    connect(ui->yes_but,&QPushButton::clicked,this,&registerDialog::switchlogin);
}

registerDialog::~registerDialog()
{
    delete ui;
}
