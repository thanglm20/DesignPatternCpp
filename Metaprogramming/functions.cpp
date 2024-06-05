#include <iostream>
#include <functional>
template<typename, typename>
struct func_pair;


template<typename R1, typename... A1,
typename R2, typename... A2>
struct func_pair<R1(A1...), R2(A2...)>
{
std::function<R1(A1...)> f;
std::function<R2(A2...)> g;
};

int main(){
    func_pair<int(int, int), float(float, float)> p;
    p.f = [](int a, int b)->int{ return a + b;};
    p.g = [](float a, float b)->float{ return a * b;};
    std::cout << p.f(4, 5) << std::endl;
    std::cout << p.g(4.0, 5.5) << std::endl;
}
