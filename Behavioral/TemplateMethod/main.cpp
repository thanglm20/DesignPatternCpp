

/*
The intent of the Template Method design pattern is to:
"Define the skeleton of an algorithm in an operation, deferring some steps to subclasses.
Template Method lets subclasses redefine certain steps of an algorithm without changing
the algorithm's structure." [GoF]

The Template Method design pattern solves problems like:
– How can the invariant parts of a behavior be implemented once
so that subclasses can implement the variant parts?
– How can subclasses redefine certain parts of a behavior (steps of an algorithm)
without changing the behavior's structure?
*/

#include <iostream>

class Shape
{
public:
    Shape() {}
    ~Shape() {}
    virtual void makeColor() = 0;
    virtual void makeEdges() = 0;
    virtual void makePoints() = 0;
    virtual void draw() final
    {
        makePoints();
        makeEdges();
        makeColor();
        std::cout << "*********************************" << std::endl;
    }
};
class Triangle : public Shape
{
public:
    Triangle()
    {
        std::cout << "Make triangle" << std::endl;
    }
    ~Triangle() {}
    void makeColor() override
    {
        std::cout << "Color: Red " << std::endl;
    }
    void makeEdges() override
    {
        std::cout << "Thare are 3 edges" << std::endl;
    }
    void makePoints() override
    {
        std::cout << "Thare are 3 points" << std::endl;
    }
};
class Rectangle : public Shape
{
public:
    Rectangle()
    {
        std::cout << "Make Rectangle" << std::endl;
    }
    ~Rectangle() {}
    void makeColor() override
    {
        std::cout << "Color: Blue " << std::endl;
    }
    void makeEdges() override
    {
        std::cout << "Thare are 4 edges" << std::endl;
    }
    void makePoints() override
    {
        std::cout << "Thare are 4 points" << std::endl;
    }
};

class Circle : public Shape
{
public:
    Circle()
    {
        std::cout << "Make Circle" << std::endl;
    }
    ~Circle() {}
    void makeColor() override
    {
        std::cout << "Color: Greed " << std::endl;
    }
    void makeEdges() override
    {
        std::cout << "This is circular" << std::endl;
    }
    void makePoints() override
    {
        std::cout << "Thare are 1 point at center" << std::endl;
    }
};
int main()
{
    std::cout << "Template Method Pattern Design" << std::endl;
    Shape* shape1 = new Circle();
    shape1->draw(); 
    Shape* shape2 = new Rectangle();
    shape2->draw(); 
    Shape* shape3 = new Triangle();
    shape3->draw(); 

    delete shape1;
    delete shape2;
    delete shape3;

    return 0;
}