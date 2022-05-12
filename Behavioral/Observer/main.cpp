

/*
- Define a one-to-many dependency between objects so that when one object
changes state, all its dependents are notified and updated automatically.
- The key idea in this pattern is to establish a flexible notification-registration mechanism
that notifies all registered objects automatically when an event of interest occurs.
*/

#include <iostream>
#include <vector>
#include "Subscriber.hpp"
#include "Subject.hpp"

int main()
{
    std::cout << "Observer Pattern Design" << std::endl;
    ComputerShop* sub = new ComputerShop();

    Observer* ob1 = new Subscriber1(sub);
    Observer* ob2 = new Subscriber2(sub);
    Observer* ob3 = new Subscriber3(sub);

    std::cout << "Total subscriber: " << sub->getTotalSubscriber() << std::endl;
    sub->setDiscount("Dell", 20.0, 100);
    sub->nofify();
    
    return 0;
}