#ifndef RECORDING_H
#define RECORDING_H

#include "thread.h"

#include <QDialog>

namespace Ui {
class Recording;
}

class Recording : public QDialog
{
    Q_OBJECT

public:
    explicit Recording(QWidget *parent = 0);
    ~Recording();

private slots:
    void on_lstartPushButton_clicked();
    void on_stopPushButton_clicked();
    void on_rStartPushButton_clicked();
    void on_aStartPushButton_clicked();

private:
    Ui::Recording *ui;
    pthread Thread;
};

#endif // RECORDING_H
