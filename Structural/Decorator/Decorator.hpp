

#ifndef Decorator_hpp
#define Decorator_hpp

#include "Beverage.hpp"

class BeverageDecorator : public Beverage
{
    private:
    Beverage* m_beverage;
    public:
    BeverageDecorator(Beverage* beverage)
    : m_beverage(beverage)
    {}
    ~BeverageDecorator(){}
    float cost()
    {
        return m_beverage->cost();
    }
};

class DecorateIce : public BeverageDecorator
{
    private:
    float m_cost = 5.0;

    public:
    DecorateIce(Beverage* beverage) : BeverageDecorator(beverage)
    {}
    ~DecorateIce(){}
    float cost()
    {
        std::cout << "added ice,  price + " << m_cost <<  std::endl;
        return BeverageDecorator::cost() + m_cost;
    }
};
class DecorateSugar : public BeverageDecorator
{
    private:
    float m_cost = 10.0;
    public:
    DecorateSugar(Beverage* beverage) : BeverageDecorator(beverage)
    {}
    ~DecorateSugar(){}
    float cost()
    {
        std::cout << "added sugar,  price + " << m_cost <<  std::endl;
        return BeverageDecorator::cost() + m_cost;
    }
};

class DecorateSize : public BeverageDecorator
{
    private:

    int m_size;
    public:
    DecorateSize(Beverage* beverage, int size)
    : 
    BeverageDecorator(beverage), m_size(size)
    {}
    ~DecorateSize(){}
    float cost()
    {
        if(m_size == 0)
        {
            std::cout << "Size S, price + 0" <<  std::endl;
            return BeverageDecorator::cost() ;
        }
        else if(m_size == 1)
        {
            std::cout << "Size M, price + 10" <<  std::endl;
            return BeverageDecorator::cost() + 10;
        }
        else if(m_size == 2)
        {
            std::cout << "Size L, price 15" <<  std::endl;
            return BeverageDecorator::cost() + 15;
        }
        return 0;
    }
};
#endif