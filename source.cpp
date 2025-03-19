#include "shape.h"
#include "circle.h"
#include "square.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    Shape *shape = new Square(10.0);
    cout << "Area: " << shape->getArea() << endl;
    cout << "Hello from Branch newClasses" << endl;
    cout << "I am the experimental branch" << endl;

    return 0;
}