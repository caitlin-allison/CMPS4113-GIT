#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"
#include <cmath>

class Circle : public Shape
{
public:
    Circle(double radius);
    virtual ~Circle() = default;

    virtual double getArea() const override;
    virtual double getPerimeter() const override;

private:
    double radius;
};

#endif // CIRCLE_H