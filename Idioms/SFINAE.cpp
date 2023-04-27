/*
SFINAE (Substitution Failure Is Not An Error) is a powerful C++ language feature that allows for compile-time checking of template parameters. 
SFINAE is a technique used to selectively enable or disable templates based on the properties of the types that are being passed as template arguments.

*/
#include <type_traits>
#include <new>
#include <iostream>
#include <string>
template <typename T>
struct has_member_foo
{
    // Check if T has a member function called "foo"
    template <typename U>
    static decltype(std::declval<U>().foo(), std::true_type()) check(int);

    // SFINAE: if "foo" doesn't exist, this function is discarded from the overload set
    template <typename U>
    static std::false_type check(...);

    // A value of "true" indicates that T has a member function called "foo"
    static constexpr bool value = decltype(check<T>(0))::value;
};

template <typename T>
typename std::enable_if<has_member_foo<T>::value, void>::type
call_foo(T& obj)
{
    obj.foo();
}

// Example usage:
struct MyType {
    void foo() { std::cout << "MyType::foo()" << std::endl;}
};

template <typename T, 
typename std::enable_if_t<std::is_integral<T>::value, bool> = true> // <typename bool = true>
T sum(T a, T b){
    return (a + b);
}


int main()
{
    MyType obj;
    call_foo(obj); // This will compile and call obj.foo()
    
    int i = 42;
    // call_foo(i);   // This will not compile, because int has no member function called "foo"
    sum(1, 2);
//    sum(1.0, 0.0);// compile error


    return 0;
}