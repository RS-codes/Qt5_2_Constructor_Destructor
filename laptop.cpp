#include "laptop.h"

//Constructor implementation
laptop::laptop(QObject *parent, QString name) : QObject(parent)
{
    this->name = name;
    qInfo() << this << name << "constructed"; //this gives the location in which its created

}

//Destructor implementation
laptop::~laptop()
{
    qInfo() << this<< name <<"destructed";
}

               //method-1 implementation
               double laptop::inKilo()
    {
               return this-> weight * 0.453592;
}


               //method-2 implementation -calls method-1 and prints out the respective name and weight in kilogram
               void laptop::test()
    {
               qInfo() << this << name << inKilo();

}
