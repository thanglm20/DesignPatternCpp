

#ifndef Train_hpp
#define Train_hpp

#include "Vehicle.hpp"

class Train : public Vehicle
{
private:
    /* data */
    int m_id;
    std::string m_name;
    std::string m_origin;
public:
    Train(int id, std::string name, std::string origin);
    ~Train();
    virtual void show() override;
};

Train::Train(int id, std::string name, std::string origin)
: Vehicle(id, name, origin)
{
}

Train::~Train()
{
}

void Train::show() 
{
    std::cout << "================ Train method factory design =========="
        <<  "\nID: " << getID()
        <<  "\nname: " << getName()
        <<  "\norigin: " << getOrigin()
        << std::endl;
}

#endif