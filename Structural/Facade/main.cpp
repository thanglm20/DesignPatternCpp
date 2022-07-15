
#include <iostream>

/*
  Façade
  Provide a unified interface to a set of interfaces in a subsystem. 
  Facade defines a higher-level interface that makes the subsystem easier to use. The pattern has structural purpose and applies to objects.

  When to use
  you want to provide a simple interface to a complex subsystem
  there are many dependencies between clients and the implementation classes of an abstraction
  you want to layer your subsystems, use a facade to define an entry point to each subsystem level
*/
class SubsystemA
{
public:
  void suboperation()
  {
    std::cout << "Subsystem A method" << std::endl;
    // ...
  }
  // ...
};

class SubsystemB
{
public:
  void suboperation()
  {
    std::cout << "Subsystem B method" << std::endl;
    // ...
  }
  // ...
};

class SubsystemC
{
public:
  void suboperation()
  {
    std::cout << "Subsystem C method" << std::endl;
    // ...
  }
  // ...
};

/*
* Facade
* delegates client requests to appropriate subsystem object
* and unified interface that is easier to use
*/
class Facade
{
public:
  Facade() : subsystemA(), subsystemB(), subsystemC() {}
  
  void operation1()
  {
    subsystemA->suboperation();
    subsystemB->suboperation();
    // ...
  }
  
  void operation2()
  {
    subsystemC->suboperation();
    // ...
  }
  // ...
  
private:
  SubsystemA *subsystemA;
  SubsystemB *subsystemB;
  SubsystemC *subsystemC;
  // ...
};


int main()
{
  Facade *facade = new Facade();
  
  facade->operation1();
  facade->operation2();
  delete facade;
  
  return 0;
}