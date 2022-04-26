
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
        singleton = Singleton::getInstance("Thread 0");
        singleton->show();
        sleep(1);
    }
    
}
void call1()
{

   Singleton* singleton;
    while(1)
    {
        singleton = Singleton::getInstance("Thread 1");
        singleton->show();
        sleep(1);
    }
    
}
int main()
{
    std::cout << "Singleton Pattern Design" << std::endl;

    std::thread thread1(call);
    std::thread thread2(call1);

    while(1)
    {sleep(1);}
    return 0;
}