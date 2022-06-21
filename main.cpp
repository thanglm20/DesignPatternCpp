#include <iostream>
#include <tuple>
#include <experimental/tuple>
#include <string>
#include <memory>
#include <vector>
using namespace std;

void print()
{
    std::cout << std::endl;
}
template <typename T, typename... Types>
void print(T var1, Types... var2)
{
    cout << var1;

    print(var2...);
}

template <typename T>
T add(T &number)
{
    return number;
}
template <typename T, typename... Args>
T add(T f, Args... args)
{
    return f + add(args...);
}

class Item
{
    public:
    Item (int a)
    {
        cout << "Constructor Item\n";
    }
    Item (const Item& i)
    {
        cout << "Copy Constructor Item\n";
    }
    Item (const Item&& i)
    {
        cout << "Move Constructor Item\n";
    }
    Item& operator=(const Item& i)
    {
        cout << "Copy Assignment Item\n";
        return *this;
    }
    Item& operator=(const Item&& i)
    {
        cout << "Move Assignment Item\n";
        return *this;
    }
};

class IItem : public Item
{
    public:
    IItem (int a)  : Item(a)
    {
        cout << "Constructor IItem\n";
    }
    IItem (const Item& i) : Item(i)
    {
        cout << "Copy Constructor IItem\n";
    }
    IItem (const Item&& i)  : Item(i)
    {
        cout << "Move Constructor IItem\n";
    }
};
class Product1
{
private:
    Item m_name;
    float m_price; 
public:
    Product1(const Item& name, float price)
    :
    m_name(name)
    {
        std::cout << "Product " << &name << std::endl;
        std::cout << "Product member" << &m_name << std::endl;
    }
    ~Product1()
    {
    }
    float getPrice()
    {
        return m_price;
    }
};

int main()
{

    print("[INFO] ",
          "Variadic template function in C++ ", "\n\tby ThangLM ", 1997, "\n");
    std::cout << "sum: " << add(1, 2, 3) << std::endl;


    Item i1(1);
    Item& i2 = i1;
    std::cout << "Item " << &i1 << std::endl;
    std::cout << "Item " << &i2 << std::endl;

    Product1(i1, 3);

    return 0;
}