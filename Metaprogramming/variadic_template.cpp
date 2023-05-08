//
// Created by Thanglm on 5/8/2023.
//
#include <type_traits>
#include <new>
#include <iostream>
#include <string>

template <typename T1, typename T2>
auto min(const T1 &a, const T2 &b)
-> typename std::common_type<const T1&, const T2&>::type
{
    return a < b ? a : b;
}

template <typename T1, typename T2, typename ... Args>
auto min(const T1 &a, const T2 &b, const Args& ... args)
-> typename std::common_type<const T1&, const T2&, const Args& ...>::type
{
    return min(min(a, b), args...);
}
int main(){
    std::cout << min(1, 2.0, 4, -1.9, -2.0) << std::endl;
}