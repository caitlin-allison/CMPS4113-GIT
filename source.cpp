#include "shape.h"
#include "circle.h"
#include "square.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{

    Shape *shape = new Square(5.0);
    cout << "Area: " << shape->getArea() << endl;
    cout << "Hello World" << endl;
    cout << "I am the main branch" << endl;

    return 0;
}