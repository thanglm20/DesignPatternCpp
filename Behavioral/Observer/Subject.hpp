
#ifndef Subject_hpp
#define Subject_hpp
#include <iostream>
#include <vector>
#include "Observer.hpp"
#include <algorithm>
#include <iterator> // for iterators
#include <memory>

class Subject
{
private:
    /* data */
    std::vector<Observer*> m_observers;
public:
    Subject(/* args */)
    {

    }
    virtual ~Subject()
    {
        std::cout << " ~Subject()" << std::endl;

        m_observers.clear();
                
    }
    void subscribe(Observer* observer)
    {
        m_observers.push_back(observer);
    }
    void remove(Observer* observer)
    {
        auto ob = std::find_if(m_observers.begin(), m_observers.end(), 
                    [&](Observer* obj){ return (observer == obj);});
        if(ob != m_observers.end())
        {
            size_t i = std::distance(m_observers.begin(), ob);
            m_observers.erase(m_observers.begin() + i);
        }
    }
    void nofify()
    {
        for(int i = 0; i < m_observers.size(); ++i)
            m_observers[i]->update();
    }
    size_t getTotalSubscriber()
    {
        return m_observers.size();
    }
    virtual void setDiscount(std::string serial, float discount, int numberOfProduct) = 0;
    virtual void getDiscount() = 0;

};


class ComputerShop : public Subject
{

private:
    float m_discount = 0.0;
    std::string m_serial;
    int m_numberOfProduct;
public:
    ComputerShop(){}
    virtual ~ComputerShop() 
    {      
        
        std::cout << " ~ComputerShop() " << std::endl;

    }   
    void setDiscount(std::string serial, float discount, int numberOfProduct) override
    {
        m_discount = discount;
        m_serial = serial;
        m_numberOfProduct = numberOfProduct;
    }
    void getDiscount() override
    {
        std::cout << "Discount Computer Shop notifications: " << std::endl;
        std::cout << "serial: " << m_serial << std::endl;
        std::cout << "discout: " << m_discount << "%" << std::endl;
        std::cout << "available products: " << m_numberOfProduct << std::endl;
    }
};

#endif