#include <iostream>
#include 'points.h'
using namespace std;
int main() {
    double temp;
    std::cout << "Enter a temperature: ";
    std::cin >> temp;

    Substance s(temp);

    std::string frozen = " will freeze: ";
    if (s.isEthylFreezing()) frozen += "ethyl alcohol, ";
    if (s.isOxygenFreezing()) frozen += "oxygen, ";
    if (s.isWaterFreezing()) frozen += "water, ";
    if (frozen != " will freeze: ") {
        frozen.erase(frozen.length()-2); // Remove trailing comma and space
        std::cout << frozen << " will freeze at " << temp << std::endl;
    } else {
        std::cout << "No substances will freeze at " << temp << std::endl;
    }

    std::string boiled = " will boil: ";
    if (s.isEthylBoiling()) boiled += "ethyl alcohol, ";
    if (s.isOxygenBoiling()) boiled += "oxygen, ";
    if (s.isWaterBoiling()) boiled += "water, ";
    if (boiled != " will boil: ") {
        boiled.erase(boiled.length()-2); // Remove trailing comma and space
        std::cout << boiled << " will boil at " << temp << std::endl;
    } else {
        std::cout << "No substances will boil at " << temp << std::endl;
    }

    return 0;
}