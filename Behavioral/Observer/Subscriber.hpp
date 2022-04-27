

#ifndef Subscriber_hpp
#define Subscriber_hpp

#include "Observer.hpp"
#include "Subject.hpp"

class Subscriber1 : public Observer
{
private:
    ComputerShop* m_subject = nullptr;
public:
    Subscriber1(ComputerShop* subject) : m_subject(subject)
    {
        m_subject->subscribe(this);
    }
    ~Subscriber1()
    {     
    }
    void update() override
    {
        std::cout << "---------------------------------" << std::endl;
        std::cout << "Dear Subscriber1" << std::endl;
        m_subject->getDiscount();
        
    }
};

class Subscriber2 : public Observer
{
private:
    ComputerShop* m_subject = nullptr;
public:
    Subscriber2(ComputerShop* subject) : m_subject(subject)
    { 
        m_subject->subscribe(this);
    }
    ~Subscriber2()
    {     
    }
    void update() override
    {
        std::cout << "---------------------------------" << std::endl;
        std::cout << "Dear Subscriber2" << std::endl;
        m_subject->getDiscount();
    }
};


class Subscriber3 : public Observer
{
private:
    ComputerShop* m_subject = nullptr;
public:
    Subscriber3(ComputerShop* subject) : m_subject(subject)
    { 
        m_subject->subscribe(this);
    }
    ~Subscriber3()
    {     
        
    }
    void update() override
    {
        std::cout << "---------------------------------" << std::endl;
        std::cout << "Dear Subscriber3" << std::endl;
        m_subject->getDiscount();
    }
};
#endif