#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    if(w.parse_xml() == 0){
        w.on_start();
    }
    return a.exec();
}
