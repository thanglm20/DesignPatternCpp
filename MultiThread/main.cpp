

/*

*/

#include <iostream>
#include <memory>
#include "Receiver.hpp"
#include "Sender.hpp"
#include <unistd.h>

int main()
{
    std::cout << "Multi-Threading Design" << std::endl;
    
    auto dataManager = std::make_shared<DataManager>();

    Sender* sender = new Sender(dataManager);
    sender->run();
    
    Receiver* receiver = new Receiver(dataManager, 1);
    receiver->run();

    Receiver* receiver2 = new Receiver(dataManager, 2);
    receiver2->run();
    while(1)
    {
        sleep(1);
    }
    return 0;
}