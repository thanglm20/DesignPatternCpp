

#ifndef Singleton_hpp
#define Singleton_hpp

#include <string>
#include <iostream>
#include <mutex>
#include <thread>
#include <memory>
#include <memory>
#include "UserFactory.hpp"


class Singleton
{
private:
    Singleton(VehicleType type, int id, std::string name, std::string origin){
        m_factory = std::make_unique<UserFactory>(type, id, name, origin);
    }
    ~Singleton(){}
    static Singleton*  m_instance;
    static std::mutex m_mutex;

    std::unique_ptr<UserFactory> m_factory;
public:

    static Singleton* getInstance(VehicleType type, int id, std::string name, std::string origin);
    static void deleteInstance();
    //TODO
    void show()
    {   
        m_factory->show();
    }
};



Singleton*  Singleton::getInstance(VehicleType type, int id, std::string name, std::string origin)
{
    
    m_mutex.lock();
    if(m_instance == nullptr)
    {
        std::cout << "Create new object Singleton successfully" << std::endl;
        m_instance = new Singleton(type, id, name, origin);
    }
    else
        std::cout << "WARNING: Existing object Singleton, return it" << std::endl;
    m_mutex.unlock();
    return m_instance;
}

void Singleton::deleteInstance()
{
    if(m_instance) delete m_instance;
}

std::mutex Singleton::m_mutex ;
Singleton* Singleton::m_instance = nullptr;
#endif