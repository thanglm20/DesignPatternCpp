

#ifndef Car_hpp
#define Car_hpp

#include "Body.hpp"
#include "Engine.hpp"
#include "Wheel.hpp"
#include <memory>
class Car
{
private:
    /* data */
    
public:
    std::unique_ptr<Body> m_body;
    std::unique_ptr<Wheel> m_wheel;
    std::unique_ptr<Engine> m_engine;
    Car(/* args */);
    Car(Car&& car);
    ~Car();
    void specs();
};

Car::Car(/* args */)
{
}

Car::Car(Car&& car) 
{
    m_body = std::move(car.m_body);
    m_wheel = std::move(car.m_wheel);
    m_engine = std::move(car.m_engine);
}
Car::~Car()
{
    std::cout << "Car destrcutor\n";
}

void Car::specs()
{
    std::cout  << "=====================================" << std::endl;
    std::cout << "Car specifications info: " << std::endl;
    std::cout << "Body: " << m_body->getManufacturer() << std::endl;
    std::cout << "Wheel: " << m_wheel->getManufacturer() << std::endl;
    std::cout << "Engine: " << m_engine->getManufacturer() << std::endl;

}




#endif