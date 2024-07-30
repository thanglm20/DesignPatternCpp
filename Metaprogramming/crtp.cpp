
#include <iostream>


template <class T>
struct Base{
    void dosth(){
        T* obj = static_cast<T*>(this);
        obj->impl();
    }   
};

struct Derived1 : Base<Derived1>{
    void impl(){
        std::cout << "Hello from Derived1\n";
    }
};

struct Derived2 : Base<Derived2>{
    void impl(){
        std::cout << "Hello from Derived2\n";
    }
};

void test(){
    Base<Derived1>* d1 = new Derived1();
    auto d2 = new Derived2();
    d1->dosth();
    d2->dosth();
    delete d1;
    delete d2;
}

int main()
{
    test();
    return 0;
}
