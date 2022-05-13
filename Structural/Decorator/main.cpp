

/*
- "Attach additional responsibilities to an object dynamically. Decorators provide a flexible
alternative to subclassing for extending functionality." [GoF]
- The Decorator design pattern solves problems like:
    How can responsibilities be added to an object dynamically?
    How can the functionality of an object be extended at run-time?
*/

#include <iostream>
#include "Beverage.hpp"
#include "Decorator.hpp"

int main()
{
    std::cout << "Decorator Pattern Design" << std::endl;
    Beverage* beverage = new MilkTea();

    // decorating
    DecorateIce* ice = new DecorateIce(beverage);
    DecorateSugar* sugar = new DecorateSugar(ice);


    DecorateSize* size = new DecorateSize(sugar, 0);
    std::cout << "Cost: " << size->cost() << std::endl;

    delete beverage;
    delete ice;
    delete sugar;

    return 0;
}