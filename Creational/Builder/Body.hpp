#ifndef Body_hpp
#define Body_hpp
#include <iostream>
#include <string>

class Body
{
private:
    std::string m_name;
public:
    Body(std::string name) : m_name(name){}
    ~Body(){};
    std::string getManufacturer()
    {
        return m_name;
    }
    Body (const Body&& body): m_name(body.m_name)
    { 

    }
    
};

#endif