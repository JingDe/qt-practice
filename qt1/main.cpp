#include "mainwindow.h"
#include <QApplication>
#include <QCoreApplication>
#include<QObject>

#include"newspaper.h"
#include"reader.h"

void slot1();

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    slot1();

    return app.exec();
}


void slot1()
{
    Newspaper newspaper("Newspaper A");
    Reader reader;
    QObject::connect(&newspaper, &Newspaper::newPaper,
                     &reader, &Reader::receiveNewspaper);
    newspaper.send();// 发出信号
}
