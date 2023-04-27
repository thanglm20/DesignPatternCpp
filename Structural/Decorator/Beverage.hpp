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
    virtual ~Beverage(){}
    virtual std::string getDescription()
    {
        std::cout << "========Beverage==========" << std::endl;
        return "Beverage";
    }
    virtual float cost() = 0;
};

class JuiceFruit : public Beverage
{
    
public:
    JuiceFruit(){}
    ~JuiceFruit() override {}
    std::string getDescription() override
    {
        return "JuiceFruit";
    } 
    float cost() override
    {
        std::cout << "Juice fruit price: 30" << std::endl;
        return 30.0;
    }
};

class MilkTea : public Beverage
{
    
public:
    MilkTea(){}
    ~MilkTea() override {}
    std::string getDescription() override
    {
        return "MilkTea";

    } 
    float cost() override
    {
        std::cout << "Milk tea price: 50" << std::endl;
        return 50.0;
    }
};


#endif