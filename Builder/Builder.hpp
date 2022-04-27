

#ifndef Builder_hpp
#define Builder_hpp
#include "Car.hpp"
#include "Body.hpp"
#include "Engine.hpp"
#include "Wheel.hpp"
#include <memory>
class Builder
{
private:
    /* data */
    Car* m_car;
public:
    Builder(/* args */)
    {
        m_car = new Car();
    }
    ~Builder()
    {
        if(m_car) delete m_car;
    }
    Builder& setWheel(std::unique_ptr<Wheel> wheel)
    { 
        m_car->m_wheel = std::move(wheel);
        return *this;
    }

    Builder& setEngine(std::unique_ptr<Engine> engine)
    { 
        m_car->m_engine = std::move(engine);
        return *this;
    }
    Builder& setBody(std::unique_ptr<Body> body)
    { 
        m_car->m_body = std::move(body);
        return *this;
    }
    Car* build()
    {
        return m_car;
    }
};




#endif