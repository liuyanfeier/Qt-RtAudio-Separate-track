#include "recording.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Recording r;
    r.setWindowTitle("reAudio");
    r.show();

    return a.exec();
}
