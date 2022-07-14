

#ifndef Subscriber_hpp
#define Subscriber_hpp

#include "Observer.hpp"
#include "Subject.hpp"
#include <memory>
class Subscriber1 : public Observer
{
private:
    std::shared_ptr<Subject> m_subject = nullptr;
public:
    Subscriber1(std::shared_ptr<Subject>& subject) : m_subject(subject)
    {
        m_subject->subscribe(this);
    }
    virtual ~Subscriber1()
    {     
    }
    void update() override
    {
        std::cout << "---------------------------------" << std::endl;
        std::cout << "Dear Subscriber1" << std::endl;
        m_subject->getDiscount();
        
    }
};

class Subscriber2 : public Observer,  std::enable_shared_from_this<Subscriber2>
{
private:
    std::shared_ptr<Subject> m_subject = nullptr;
public:
    Subscriber2(std::shared_ptr<Subject>& subject) : m_subject(subject)
    { 
        m_subject->subscribe(this);
    }
    virtual ~Subscriber2()
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
    std::shared_ptr<Subject> m_subject = nullptr;
public:
    Subscriber3(std::shared_ptr<Subject>& subject) : m_subject(subject)
    { 
        m_subject->subscribe(this);
    }
    virtual ~Subscriber3()
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