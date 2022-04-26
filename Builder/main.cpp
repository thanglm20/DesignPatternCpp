

/*
- Use the Builder Pattern to encapsulate the construction of a product and
allow it to be constructed in steps.
- To create object in many steps, many options
- Builder methods often support chaining (for example, someBuilder->setValueA(1)->setValueB(2)->create()
*/

#include <iostream>
#include <vector>
#include "Builder.hpp"

int main()
{
    std::cout << "Builder Pattern Design" << std::endl;

    Builder builder;
    builder.setBody(std::make_unique<Body>(Body("Toyota")))
            .setEngine(std::make_unique<Engine>(Engine("Toyota")))
            .setWheel(std::make_unique<Wheel>(Wheel("Toyota")));
    
    Car* car = std::move(builder.build());
    car->specs();
    return 0;
}