#include <iostream>
#include "shape.h"
using namespace std;

int main()
{
    Shape *shape = new Shape(); // Changed to Circle with radius 3.0
    cout << "Area: " << shape->getArea() << endl;
    cout << "Hello from Branch A" << endl;     // Modified message
    cout << "I am the feature branch" << endl; // Modified message

    return 0;
}