#include <QCoreApplication>
#include <QList>
#include <QDebug>
#include <QStringList>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<int> list;

    list << 1 <<2 <<3;

    for(int i =0; i< 5; i++)
    {
        list.append(i);
    }

    qInfo()<<list;

    qInfo() << "Length" << list.length();
    qInfo() << "Size" << list.size();
    qInfo() << "Count" << list.count();
    qInfo() << "Count" << list.count(4); // number of 4

    list.replace(2,99);
    list << 3 << 3 << 3;
    list.remove(3); // will only remove one occurence of

    foreach (int i, list) {
        qInfo() <<i;
    }


    QStringList names {"Bryan"};
    names << "Tammy" << "Rango";
    names.append("Heather") ;
    names.replaceInStrings("a", "@");
    qInfo() << names;

    names.replaceInStrings("@", "a");
    names.sort();
    qInfo() << names;

    QString people = names.join(",");
    qInfo() << people;

    QStringList myList = names.filter("r");
    qInfo() <<myList;

    return a.exec();
}
