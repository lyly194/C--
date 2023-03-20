#include <iostream>
#include <string>

class Substance {
public:
    Substance() : temperature(0) {}
    Substance(double temp) : temperature(temp) {}

    void setTemperature(double temp) { temperature = temp; }
    double getTemperature() const { return temperature; }

    bool isEthylFreezing() const { return temperature <= -173; }
    bool isEthylBoiling() const { return temperature >= 172; }
    bool isOxygenFreezing() const { return temperature <= -362; }
    bool isOxygenBoiling() const { return temperature >= -306; }
    bool isWaterFreezing() const { return temperature <= 32; }
    bool isWaterBoiling() const { return temperature >= 212; }

private:
    double temperature;
};