

#ifndef UserFactory_hpp
#define UserFactory_hpp

#include <memory>
#include "Train.hpp"
#include "Airplane.hpp"
#include "Vehicle.hpp"
#include "Car.hpp"

Vehicle* Vehicle::create(VehicleType type, int id, std::string name, std::string origin)
{
    Vehicle* vehicle = nullptr;
    if(type == VehicleType::Car)
        vehicle = new Car(id, name, origin);
    
    else if(type == VehicleType::AirPlane)
        vehicle = new Airplane(id, name, origin);

    else if(type == VehicleType::Train)
        vehicle = new Train(id, name, origin);
    else 
        std::cout << "Does not support this vehicle" << std::endl;

    return vehicle;
}


class UserFactory
{
private:
    /* data */
    Vehicle* m_vehicle;
public:
    UserFactory(VehicleType type, int id, std::string name, std::string origin)
    {
        m_vehicle = Vehicle::create(type, id, name, origin);
    }
    ~UserFactory(){
        if(m_vehicle) delete m_vehicle;
    }
    void show()
    {
        m_vehicle->show();
    }
};


#endif



