#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    int yearModel;
    string make;
    int speed;
public:
    Car(int y, string m) {
        yearModel = y;
        make = m;
        speed = 0;
    }
    int getYearModel() const {
        return yearModel;
    }
    string getMake() const {
        return make;
    }
    int getSpeed() const {
        return speed;
    }
    void accelerate() {
        speed += 5;
    }
    void brake() {
        speed -= 5;
    }
};

int main() {
    Car myCar(2021, "Toyota");
    for (int i = 0; i < 5; i++) {
        myCar.accelerate();
        cout << "Current speed: " << myCar.getSpeed() << endl;
    }
    for (int i = 0; i < 5; i++) {
        myCar.brake();
        cout << "Current speed: " << myCar.getSpeed() << endl;
    }
    return 0;
}
