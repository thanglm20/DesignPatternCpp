

#ifndef Machine_hpp
#define Machine_hpp

#include <iostream>
#include <string>

enum class VehicleType{Car = 0, AirPlane = 2, Train = 3};

class Vehicle
{
private:
    /* data */
    int m_id;
    std::string m_name;
    std::string m_origin;
    
public:
    Vehicle(int id, std::string name, std::string origin)
    :
    m_id(id), m_name(name), m_origin(origin){}

    virtual ~Vehicle()
    {
        std::cout << "Called Vehicle Deconstructor" << std::endl;
    }

    int getID(){return m_id;}
    std::string getName() { return m_name;}
    std::string getOrigin() {return m_origin;}

    virtual void show() = 0;

    static Vehicle* create(VehicleType type, int id, std::string name, std::string origin);

};



#endif