#ifndef LAPTOP_H
#define LAPTOP_H

#include <QObject>
#include <QDebug>

class laptop : public QObject
{
    Q_OBJECT
public:
    explicit laptop(QObject *parent = 0, QString name="");

    ~laptop();

    //attributes
    QString name;
    int weight;

    //methods
    double inKilo();  //ftn prototype -definition in implementation file
    void test();

signals:

public slots:
};

#endif // LAPTOP_H
