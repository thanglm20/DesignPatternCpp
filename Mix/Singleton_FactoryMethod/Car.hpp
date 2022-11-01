

#ifndef Car_hpp
#define Car_hpp

#include "Vehicle.hpp"

class Car : public Vehicle
{
private:
    /* data */
    int m_id;
    std::string m_name;
    std::string m_origin;
public:
    Car(int id, std::string name, std::string origin);
    ~Car();
    virtual void show() override;
};

Car::Car(int id, std::string name, std::string origin)
: Vehicle(id, name, origin)
{

}

Car::~Car()
{

}

void Car::show() 
{
    std::cout << "================ Car method factory design =========="
        <<  "\nID: " << getID()
        <<  "\nname: " << getName()
        <<  "\norigin: " << getOrigin()
        << std::endl;
}

#endif