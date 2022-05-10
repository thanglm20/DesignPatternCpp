#ifndef Beverage_hpp
#define Beverage_hpp
#include <iostream>
#include <string>

class Beverage
{
private:
    std::string m_description = "Beverage: ";
public:
    Beverage(){}
    ~Beverage(){}
    virtual std::string getDescription() = 0;
    virtual float cost() = 0;
};

class JuiceFruit : public Beverage
{
    
public:
    JuiceFruit(){}
    ~JuiceFruit(){}
    std::string getDescription()
    {

    } 
    float cost()
};

#endif