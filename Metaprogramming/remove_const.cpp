//
// Created by Thanglm on 5/8/2023.
//

//
// Created by Thanglm on 5/8/2023.
//
#include <type_traits>
#include <new>
#include <iostream>
#include <string>

template<typename T >
struct removeConst {
    using type = T;        // (1)
};

template<typename T >
struct removeConst<const T> {
    using type = T;       // (2)
};

int main() {

    std::cout << std::boolalpha;
    std::cout << std::is_same<int, removeConst<const int>::type>::value << '\n'; // true
    std::cout << std::is_same<int, std::remove_const<const int>::type>::value << '\n'; // true

    typedef const int a;
    std::cout << std::is_same<int, std::remove_const<a>::type>::value << std::endl;
}
