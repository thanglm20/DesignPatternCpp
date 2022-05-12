#include <iostream>
#include <vector>
#include <memory>
#include <string>
#include <sstream>
int main()
{
    std::cout << "Patterns Design in C++" << std::endl;

    std::ostringstream oss;
    std::size_t pos = 0;
    std::size_t prevPos = pos;
    std::string str = "thanga";
    pos  = str.find('a');
    std::cout << "pos: " << pos << std::endl;
    oss << str.substr(prevPos, pos - prevPos);
    std::cout << "oss: " << oss.str() << std::endl;

    return 0;
}