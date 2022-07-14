#ifndef Order_hpp
#define Order_hpp
#include "Product.hpp"
#include <vector>
#include "DiscountStrategy.hpp"

class Order
{
private:
    std::vector<Product> m_products;
    // DiscountStrategy* m_discountStrategy;
public:
    Order()
    {
    }
    ~Order()
    {
    }
    void addProduct(Product& product)
    {
        m_products.push_back(product);
    }
    float getCost()
    {
        float total = 0;
        for(auto p : m_products)
            total += p.getPrice();
        return total; 
    }
    float getDiscountCost(DiscountStrategy* discountStrategy)
    {
        return discountStrategy->calculate(m_products);
    }
    size_t getSize()
    {
        return m_products.size();
    }

};


#endif