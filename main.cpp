#include "mainwindow.h"
#include "gpastore.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GPAStore* gpa;
    MainWindow w(gpa);
    w.show();

    return a.exec();
}
