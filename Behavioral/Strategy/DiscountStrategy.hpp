#ifndef DiscountStrategy_hpp
#define DiscountStrategy_hpp
#include <iostream>
#include <string>
#include <vector>
#include "Product.hpp"

class DiscountStrategy
{
public:
    virtual float calculate(std::vector<Product>& products) = 0;
};


// implement
class NumberProductsStrategy : public DiscountStrategy
{
public:
    NumberProductsStrategy(){}
    ~NumberProductsStrategy(){}
    float calculate(std::vector<Product>& products) override
    {   
        float total = 0;
        for(auto p : products)
            total += p.getPrice();
        float cost = 0;
        if(products.size() >= 3)
        {
            
            cost = total * 0.75;
            return cost;
        }
        else
        {
            std::cout << "Your order must be more than two products to get discount, thanks\n";
            return total;
        }
    }
};

// implement
class PriceProductStrategy : public DiscountStrategy
{

public:
    PriceProductStrategy(){}
    ~PriceProductStrategy(){}
    float calculate(std::vector<Product>& products) override
    {   
        float cost = 0;
        float total = 0;
        for(auto p : products)
            total += p.getPrice();
        if(total >= 100.0)
        {
            cost = total * 0.9;
            return cost;    

        }
        else
        {
            std::cout << "Your order must have cost more than 100.0VND to get discount, thanks\n";
            return total;
        }
    }
};

#endif