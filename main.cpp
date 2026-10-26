#include <QDebug>
#include <QCoreApplication>

int main(int argc, char *argv[]) {
    QCoreApplication a(argc,argv);

    qInfo() << "Csocsvihar";

    return a.exec();
}