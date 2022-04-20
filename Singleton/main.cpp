
#include <iostream>
#include <vector>
#include <unistd.h>
#include <thread>
#include "Singleton.hpp"

void call()
{

   Singleton* singleton;
    while(1)
    {
        singleton = Singleton::getInstance();
        singleton->show();
        sleep(1);
    }
    
}
int main()
{
    std::cout << "Singleton Pattern Design" << std::endl;

    std::thread thread1(call);
    std::thread thread2(call);

    while(1)
    {sleep(1);}
    return 0;
}