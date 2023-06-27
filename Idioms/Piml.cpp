/*
Pointer to implementation using the PImpl Idiom, which hides the implementation in the headers and includes an interface file that compiles instantly.
Using hazard pointer or opaque pointer to implement
An opaque pointer is a pointer that points to a data structure whose contents are not exposed at the time of its definition. 
The following pointer is opaque. One can’t know the data contained in STest structure by looking at the definition.
struct STest* pSTest;
*/

#include <iostream>
#include <memory>

// header file
class Executor{
public:
    explicit Executor();
    ~Executor();
    void execute();
private:
    class Piml;
    std::unique_ptr<Piml> m_piml;
};

// source file, any change in Piml will not affect to user or client code.
class Executor::Piml{
public:
    explicit Piml(){}
    ~Piml(){}
    void implemetation(){
        std::cout << "Implement and change somthing here\n";
    }
};

Executor::Executor(){}
Executor::~Executor(){}
void Executor::execute(){
    m_piml->implemetation();
}

int main(){
    
    Executor exe;
    exe.execute();
    enum struct Color: char {
        red = 125,
        blue,
        green
    };

    return 0;
}
