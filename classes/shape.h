#ifndef SHAPE_H
#define SHAPE_H

class Shape
{
public:
    virtual ~Shape() = default;
    virtual double getArea() const = 0;
    virtual double getPerimeter() const = 0;
};

#endif // SHAPE_H