#include <iostream>
#include "hinhtron.h"
using namespace std;

hinhtron::hinhtron(){}
hinhtron::hinhtron(double radius){
    this->radius = radius;
}
void hinhtron:: setRadius(double radius){
    this->radius = radius;
}
double hinhtron::getRadius(){
    return this->radius;
}
double hinhtron::getArea(){
    return this -> PI * this->radius *this -> radius;
}
double hinhtron::getDiameter(){
    return this -> radius * 2;
}
double hinhtron::getCircumference(){
    return this -> PI * this -> radius * 2;
}
void hinhtron::display(){
    cout << "dien tich:" << getArea() << endl;
    cout << "duong kinh: "<< getDiameter() << endl;
    cout << "chu vi: "<<getCircumference() << endl;
}
