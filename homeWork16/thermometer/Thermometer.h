#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class Thermometer
{
private:

    double currentTemperature;
    double minLimit;
    double maxLimit;

public:

    Thermometer(double cTemp, double lMin, double lMax);
        
    void showThermometer();
    double increaseTemperature(double newValue);
    double decreaseTemperature(double newValue);

    double getCurrentTemperature(); 
    
};
