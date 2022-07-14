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




// template <typename T, typename T2>
// typename std::common_type<T, T2>::type sum(T t, T2 t2) {
//     return t + t2;
// }
template <typename T, typename T2>
auto sum(T t, T2 t2) {
    return t + t2;
}

struct B
{
    float a;
    B(){}
};

int main() {

    std::cout << '\n';
    std::cout << typeid(6).name() << '\n';   
    std::cout << typeid(sum(5.5, 5.5)).name() << '\n';     // double
    std::cout << typeid(sum(5.5, true)).name() << '\n';    // double
    std::cout << typeid(sum(true, 5.5)).name() << '\n';    // double
    std::cout << typeid(sum(true, false)).name() << '\n';  // bool

    std::cout << '\n';

    std::vector<B> vec;
    B b1;
    B b2;
    vec.push_back(b1);
    vec.push_back(b2);

    std::cout << &vec.at(0)<< std::endl;
    std::cout << &vec.at(1)<< std::endl;
    std::cout << &vec.at(6)<< std::endl;

}
