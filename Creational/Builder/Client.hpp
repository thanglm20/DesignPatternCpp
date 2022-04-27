

#ifndef Client_hpp
#define  Client_hpp
#include "Builder.hpp"
#include <vector>
class Client
{
private:
    /* data */
    std::vector<Builder*> m_builder;
public:
    Client(/* args */)
    {
    }

    ~Client()
    {
    }
    void addBuilder(Builder* builder)
    {
        m_builder.push_back(builder);
    }

    void getCars()
    {
        for(auto i : m_builder)
        {
            Car* car = i->build();
            car->specs();
        }
    }
};





#endif