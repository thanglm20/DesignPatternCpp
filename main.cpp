#include <iostream>
#include <tuple>
#include <experimental/tuple>
#include <string>

using namespace std;

void print()
{

}
template <typename T, typename... Types>
void print(T var1, Types... var2)
{
    cout << var1 ;
 
    print(var2...);
}

template<typename T>
T add(T& number)
{
    return number;
}
template <typename T, typename... Args>
T add(T f, Args... args)
{
    return f + add(args...);
}
int main() {

    print("[INFO] ",
    "Variadic template function in C++ ", "\n\tby ThangLM ", 1997 , "\n");
    std::cout << "sum: " << add(1, 2, 3) << std::endl;
    return 0;
}