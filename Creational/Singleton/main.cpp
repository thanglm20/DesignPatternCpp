
#include <iostream>
#include <vector>
#include <thread>
#include "Singleton.hpp"
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds

void call()
{

   Singleton* singleton;
    while(1)
    {
        singleton = Singleton::getInstance("Thread 0");
        singleton->show();
        std::this_thread::sleep_for (std::chrono::seconds(1));

    }
    
}
void call1()
{

   Singleton* singleton;
    while(1)
    {
        singleton = Singleton::getInstance("Thread 1");
        singleton->show();
        std::this_thread::sleep_for (std::chrono::seconds(1));

    }
    
}
int main()
{
    std::cout << "Singleton Pattern Design" << std::endl;

    std::thread thread1(call);
    std::thread thread2(call1);

    while(1)
    {    
        std::this_thread::sleep_for (std::chrono::seconds(1));
    }
    return 0;
}