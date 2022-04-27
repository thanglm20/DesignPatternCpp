

#ifndef Airplane_hpp
#define Airplane_hpp

#include "Vehicle.hpp"

class Airplane : public Vehicle
{
private:
    /* data */
    int m_id;
    std::string m_name;
    std::string m_origin;
public:
    Airplane(int id, std::string name, std::string origin);
    ~Airplane();
    virtual void show() override;
};

Airplane::Airplane(int id, std::string name, std::string origin)
: Vehicle(id, name, origin)
{
}

Airplane::~Airplane()
{
}

void Airplane::show() 
{
    std::cout << "================ Airplane method factory design =========="
        <<  "\nID: " << getID()
        <<  "\nname: " << getName()
        <<  "\norigin: " << getOrigin()
        << std::endl;
}

#endif