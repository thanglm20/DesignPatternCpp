
#include <iostream>
#include <vector>
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds
#include "Singleton.hpp"

void call()
{

   Singleton* singleton;
    while(1)
    {
        singleton = Singleton::getInstance(VehicleType::Car, 1, "Toyota", "Japan");
        singleton->show();
        std::this_thread::sleep_for (std::chrono::seconds(1));
    }
    
}

void call1()
{

   Singleton* singleton;
    while(1)
    {
        singleton = Singleton::getInstance(VehicleType::AirPlane, 2, "Boing", "American");
        singleton->show();
        std::this_thread::sleep_for (std::chrono::seconds(1));

    }
    
}

int main()
{

    std::thread thread1(call);
    std::thread thread2(call1);

    while(1)
    {    
        std::this_thread::sleep_for (std::chrono::seconds(1));
    }
    return 0;
}