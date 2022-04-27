#ifndef Wheel_hpp
#define Wheel_hpp
#include <iostream>
#include <string>

class Wheel
{
private:
    std::string m_name;
public:
    Wheel(std::string name) : m_name(name){}
    ~Wheel(){}
    std::string getManufacturer()
    {
        return m_name;
    }
    Wheel (Wheel&& wheel): m_name(wheel.m_name)
    {
        
    }
};

#endif