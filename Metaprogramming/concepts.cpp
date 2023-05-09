//
// Created by Thanglm on 5/9/2023.
//

#include <new>
#include <iostream>
#include <string>
#include <concepts>
#include <type_traits>

template<typename T>
concept Arithmetic = std::is_arithmetic<T>::value;

template<typename  T>
requires Arithmetic<T>
bool is_bool(T t) { return t; }

template<Arithmetic ... Args>
bool is_bool_all(Args... args) { return (... && args); }

template<Arithmetic... Args>
bool is_bool_any(Args... args) { return (... || args); }

template<Arithmetic... Args>
bool is_bool_none(Args... args) { return !(... || args); }

template < int I >
concept ODD = !(I%2);

template< int N >
requires( ODD<N> )
void Check() { std::cout << "odd number template spezialisation " << std::endl;}

int main(){

    std::cout << std::boolalpha << std::endl;

    std::cout << "bool: " << is_bool(true) << std::endl;

    std::cout << "all(5, true, 5.5, false): " << is_bool_all(5, true, 5.5, false) << std::endl;

    std::cout << "any(5, true, 5.5, false): " << is_bool_any(5, true, 5.5, false) << std::endl;

    std::cout << "none(5, true, 5.5, false): " << is_bool_none(0, 0.0, false, false) << std::endl;

    Check<2>();
}