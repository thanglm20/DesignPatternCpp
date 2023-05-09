//
// Created by Thanglm on 5/8/2023.
//
#include <type_traits>
#include <new>
#include <iostream>
#include <string>
#include <vector>

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

// add vectors
template<typename ...Ts>
struct GetFirst{};

template<typename First, typename ...Rest>
struct GetFirst<std::vector<First>, Rest...>{
    using Type = First;
};

template<typename ...Ts>
auto add (const Ts&... vecs){
    using T = typename GetFirst<Ts...>::Type;
    auto size = (vecs.size(),...);// choosing the size of the last vector
    std::vector<T> res(size);

    for (int i=0;i<size;i++){
        res[i] = ((vecs[i])+...);
    }
    return res;
}
// bool all
template<class ...Args>
bool is_bool_all(Args ...args){
    return (args && ...);
}
//
template <class ...Args>
auto sum_all(Args ...args) ->typename std::common_type<Args...>::type{
    return (args + ...);
}
// print all
template <class ...Args>
void print(Args ...args){
    (std::cout << ... << args );
}

using namespace std;
int main(){
    std::cout << min(1, 2.0, 4, -1.9, -2.0) << std::endl;

    std::vector<int> a(3,1);
    std::vector<int> b(3,2);
    std::vector<int> c(3,3);
    std::vector<int> d(3,4);

    auto res1 = add(a,b,c,d);
    for(auto& v : res1){
        std::cout << v << std::endl;
    }
    //
    cout << "\nbool: " << is_bool_all(true, true, false, true);
    cout << "\nsum: " << sum_all(1, 2, 3, 4);
    print("\nhello", "viet nam", 1,2, 3);
    try{
        throw std::runtime_error("error");
    }
    catch (std::exception const& ex){
        std::cout << ex.what() << std::endl;
    }
    cout << "done\n";
}