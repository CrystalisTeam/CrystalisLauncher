#include <QApplication>
#include "core.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    Core core;
    core.MainThread();

    return a.exec();
}

