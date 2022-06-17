#include <iostream>
#include <tuple>
#include <experimental/tuple>
#include <string>
#include "function.hpp"

using namespace std;

void print()
{

}
template <typename T, typename... Types>
void print(T var1, Types... var2)
{
    cout << var1 << endl;
 
    print(var2...);
}

template<typename T>
T first(T& number)
{
    return number;
}
template <typename T, typename... Args>
T add(T f, Args... args)
{
    return f + add(args...);
}
int main() {
    int result1 = add(4, 5);
    float result2 = add(5.0, 5.0);
    std::cout << result1<< std::endl;
    std::cout << result2 << std::endl;
    std::cout << "sum: " << add(1, 2, 3) << std::endl;
    return 0;
}