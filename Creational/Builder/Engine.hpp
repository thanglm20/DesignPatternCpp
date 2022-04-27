#ifndef Engine_hpp
#define Engine_hpp
#include <iostream>
#include <string>

class Engine
{
private:
    std::string m_name;
public:
    Engine(std::string name) : m_name(name){}
    ~Engine(){}
    std::string getManufacturer()
    {
        return m_name;
    }
    Engine (Engine&& engine): m_name(engine.m_name)
    {
        
    }
};

#endif