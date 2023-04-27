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

class C{
public:
    C(){}
    ~C(){}
    static int get(void* arg){
        auto ptr = (C*)(arg);
        return ptr->data;
    }
    static int st_data;
private:
    int data = 10;


};
int C::st_data = 20;

int main() {


    C c;
//    std::cout << c.get(&c) << std::endl;
    std::cout << C::get(&c) << std::endl;
    std::cout << C::st_data << std::endl;


}
