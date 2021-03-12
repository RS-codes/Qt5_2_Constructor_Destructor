#include <QCoreApplication>
#include "laptop.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //Destructor is not called,when using below snippet. So, created a new ftn(above) to create instances
    laptop mine(0, "my laptop");
    mine.weight=3;
    mine.test();

    //makeLaptops(&a);

    return a.exec();
}
