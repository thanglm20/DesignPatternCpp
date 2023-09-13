

#include <bits/stdc++.h>
class Circle;
class Square;
class ShapeVisitor
{
public:
    virtual ~ShapeVisitor() = default;
    virtual void visit(Circle const &c) const = 0;
    virtual void visit(Square const &s) const = 0;
    // Possibly more visit() functions, one for each concrete shape
};

class Draw : public ShapeVisitor
{
public:
    void visit(Circle const &c) const override{
        std::cout << "Drawing Circle ...\n";
    }
    void visit(Square const &s) const override{
        std::cout << "Drawing Square ...\n";

    }
    // Possibly more visit() functions, one for each concrete shape
};

class Shape
{
public:
    virtual ~Shape() = default;
    virtual void accept(ShapeVisitor const &v) = 0;
    // ...
};

class Circle : public Shape
{
private:
    double radius_;

public:
    explicit Circle(double radius)
        : radius_(radius)
    {
        /* Checking that the given radius is valid */
    }
    void accept(ShapeVisitor const &v) override { v.visit(*this); }
    double radius() const { return radius_; }
};

class Square : public Shape
{
private:
    double side_;

public:
    explicit Square(double side)
        : side_(side)
    {
        /* Checking that the given side length is valid */
    }
    void accept(ShapeVisitor const &v) override { v.visit(*this); }
    double side() const { return side_; }
};

void drawAllShapes(std::vector<std::unique_ptr<Shape>> const &shapes)
{
    Draw* draw = new Draw();
    for (auto const &shape : shapes)
    {
        shape->accept(Draw{});
    }
}

int main()
{
    using Shapes = std::vector<std::unique_ptr<Shape>>;
    // Creating some shapes
    Shapes shapes;
    shapes.emplace_back(std::make_unique<Circle>(2.3));
    shapes.emplace_back(std::make_unique<Square>(1.2));
    shapes.emplace_back(std::make_unique<Circle>(4.1));
    // Drawing all shapes
    drawAllShapes(shapes);
    return 0;
}