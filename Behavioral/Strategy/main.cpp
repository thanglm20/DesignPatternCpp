

/*
- Define a family of algorithms, encapsulate each one, and make them interchangeable.
Strategy lets the algorithm vary independently from clients that use it.
The Strategy design pattern solves problems like:
– How can a class be configured with an algorithm at run-time
instead of implementing an algorithm directly?
– How can an algorithm be selected and exchanged at run-time?
• The term algorithm is usually defined as a procedure that takes some value as input, performs
a finite number of steps, and produces some value as output.
From a more general point of view, an algorithm is an arbitrary piece of code that does
something appropriate.
• For example, calculating prices in an order processing system.
To calculate prices in different ways (depending on run-time conditions like type of customer,
volume of sales, product quantity, etc.), it should be possible to select the right pricing
algorithm (pricing 'strategy') at run-time.
• The Strategy pattern describes how to solve such problems:
– Define a family of algorithms, encapsulate each one, - define separate classes
(Strategy1,Strategy2,…) that implement (encapsulate) each algorithm,
– and make them interchangeable - and define a common interface (Strategy) through which
algorithms can be (inter)changed at run-time.
*/
/*
    Don't pass object with Strategy
    Only set Strategy to do sth on existing workers
*/
#include <functional>
#include "Order.hpp"
#include "DiscountStrategy.hpp"
int main()
{
    std::cout << "Strategy Pattern Design" << std::endl;

    Product phone(std::string("IPhone"), 30);
    Product laptop(std::string("Dell"), 25);
    Product videoGame(std::string("PS4"), 50);
    
    Order* myOrder = new Order();
    myOrder->addProduct(phone);
    myOrder->addProduct(laptop);
    myOrder->addProduct(videoGame);
    // get original cost
    std::cout << "Original cost: " << myOrder->getCost() << std::endl;
    // // get discount by NumberProductStrategy
     std::cout << "Cost added number product strategy: " 
            << myOrder->getDiscountCost(new NumberProductsStrategy()) << std::endl;
    // // get discount by PriceProductStrategy
    std::cout << "Cost added price product strategy: "
            << myOrder->getDiscountCost(new PriceProductStrategy()) << std::endl;

    
    return 0;
}
