#include "mainwindow.h"
#include<iostream>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    std::cout<<"切换分支2"<<std::endl;
    w.show();
    return a.exec();
}
