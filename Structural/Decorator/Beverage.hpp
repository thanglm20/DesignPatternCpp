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
    std::string getDescription()
    {
        std::cout << "========Beverage==========" << std::endl;
    }
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
    {
        std::cout << "Juice fruit price: 30" << std::endl;
        return 30.0;
    }
};

class MilkTea : public Beverage
{
    
public:
    MilkTea(){}
    ~MilkTea(){}
    std::string getDescription()
    {

    } 
    float cost()
    {
        std::cout << "Milk tea price: 50" << std::endl;
        return 50.0;
    }
};


#endif