#include "shape.h"
#include "circle.h"
#include "square.h"
#include <iostream>
#include <string>

using namespace std;
void printShape(Shape *shape);
void printHeading();
int add(int a, int b);

int main()
{
    Shape *shape = new Square(10.0);
    cout << "Area: " << shape->getArea() << endl;
    printHeading();

    printShape(shape);

    shape = new Circle(10.0);
    printShape(shape);

    cout << "Perimeter: " << shape->getPerimeter() << endl;
    cout << "Sum: " << add(1, 2) << endl;

    delete shape;

    return 0;
}

void printShape(Shape *shape)
{
    cout << "Area: " << shape->getArea() << endl;
}

void printHeading()
{
    cout << "Hello from branch newClasses" << endl;
}

int add(int a, int b)
{
    return a + b;
}