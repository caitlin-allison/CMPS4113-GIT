#ifndef SQUARE_H
#define SQUARE_H

#include "shape.h"

class Square : public Shape
{
public:
    Square(double sideLength);
    virtual ~Square() = default;

    virtual double getArea() const override;
    virtual double getPerimeter() const override;

private:
    double sideLength;
};

#endif // SQUARE_H