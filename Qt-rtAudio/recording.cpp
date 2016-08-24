#include "recording.h"
#include "ui_recording.h"

Recording::Recording(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Recording)
{
    ui->setupUi(this);
}

Recording::~Recording()
{
    delete ui;
}

void Recording::on_lstartPushButton_clicked()
{
    if (Thread.isRunning())
        Thread.exit(0);
    Thread.flag = true;
    Thread.num = 0;
    Thread.start();
}

void Recording::on_stopPushButton_clicked()
{
    Thread.flag = false;
    if (Thread.isRunning()) {
        Thread.exit(0);
        qDebug() << "GameOver!";
    }
}

void Recording::on_rStartPushButton_clicked()
{
    if (Thread.isRunning())
        Thread.exit(0);
    Thread.flag = true;
    Thread.num = 1;
    Thread.start();
}

void Recording::on_aStartPushButton_clicked()
{
    if (Thread.isRunning())
        Thread.exit(0);
    Thread.flag = true;
    Thread.num = 2;
    Thread.start();
}
