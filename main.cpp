#include <QCoreApplication>

/*

 SOLID - https://en.wikipedia.org/wiki/SOLID
 Single Responsibility Principle
 Open/Closed Principle
 Liskov Substitution Principle
 Interface Segregation Principle
 Dependency Inversion Principle

 What
 Open/Closed Principle

 Define
 Software entities (classes, modules, functions, etc.) should be open for extension, but closed for modification

 Why
 Avoids breaking things in the future if we modify the code

 Example
 Many frameworks use inheritance but this creates tight coupling
 Example Qt uses inheritance mostly QTCPSocket and QSSLSocket
 We will use an interface so this example also complies with the other solid princibles

 */


#include <QDebug>
#include <QStringList>
#include "shop.h"
#include "coffeemachine.h"
#include "caffeinator3000.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Shop shop;
    QStringList list;
    list << "Sugar" << "Flavoring";

    //CoffeeMachine machine;
    Caffeinator3000 c3000;
    shop.sellDrink(list,&c3000);

    return a.exec();
}
