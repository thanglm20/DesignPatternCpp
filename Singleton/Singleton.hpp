

#ifndef Singleton_hpp
#define Singleton_hpp

#include <string>
#include <iostream>

class Singleton
{
private:
    Singleton(){}
    ~Singleton(){}
    static Singleton* m_instance;
    std::string m_name;
public:

    static Singleton* getInstance();
    static void deleteInstance();
    //TODO
    void show()
    {
        std::cout << "Singleton name: " << m_name << std::endl;
    }
};



Singleton* Singleton::getInstance()
{
    std::cout << "Called getinstance in Singleton" << std::endl;
    if(m_instance == nullptr)
    {
        m_instance = new Singleton();
    }
    return m_instance;
}

void Singleton::deleteInstance()
{
    if(m_instance) delete m_instance;
}


Singleton* Singleton::m_instance = nullptr;
#endif