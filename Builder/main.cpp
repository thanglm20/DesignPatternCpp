

/*
- Use the Builder Pattern to encapsulate the construction of a product and
allow it to be constructed in steps.
- To create object in many steps, many options
- Builder methods often support chaining (for example, someBuilder->setValueA(1)->setValueB(2)->create()
*/

#include <iostream>
#include <vector>
#include "Client.hpp"

int main()
{
    std::cout << "Builder Pattern Design" << std::endl;
    Client client;
    for(int i = 0; i < 5; ++i)
    {
        Builder* builder = new Builder();

        builder->setBody(std::make_unique<Body>("Toyota"))
            .setEngine(std::make_unique<Engine>(Engine("Audi")))
            .setWheel(std::make_unique<Wheel>(Wheel("Mecedes")));
        client.addBuilder(builder);
    }
    client.getCars();
    return 0;
}