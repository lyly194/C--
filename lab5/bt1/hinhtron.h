#include <iostream>
using namespace std;
class hinhtron{
    private:
    double radius;
    const double PI = 3.14159;
    public:
    hinhtron();
    hinhtron(double radius);
    void setRadius(double radius);
    double getRadius();
    double getArea();
    double getDiameter();
    double getCircumference();
    void display();


};