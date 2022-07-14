#ifndef Product_hpp
#define Product_hpp
#include <iostream>
#include <string>
class Product
{
private:
    std::string m_name;
    float m_price; 
public:
    Product(const std::string& name, float price)
    :
    m_name(name), m_price(price)
    {
    }
    ~Product()
    {
    }
    float getPrice()
    {
        return m_price;
    }
};


#endif