

#ifndef Singleton_hpp
#define Singleton_hpp

#include <string>
#include <iostream>
#include <mutex>
#include <thread>
#include <memory>
class Singleton
{
private:
    Singleton(std::string name): m_name(name){}
    ~Singleton(){}
    static Singleton*  m_instance;
    static std::mutex m_mutex;

    std::string m_name;
public:

    static Singleton* getInstance(std::string name);
    static void deleteInstance();
    //TODO
    void show()
    {
        std::cout << "Singleton name: " << m_name << std::endl;
    }
};



Singleton*  Singleton::getInstance(std::string name)
{
    
    m_mutex.lock();
    if(m_instance == nullptr)
    {
        std::cout << "Create new object Singleton successfully" << std::endl;
        m_instance = new Singleton(name);
    }
    else
        std::cout << "Existing object Singleton, return it" << std::endl;
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