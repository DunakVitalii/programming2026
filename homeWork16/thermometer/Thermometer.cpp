#include "Thermometer.h"
#include <iostream>

Thermometer::Thermometer(double cTemp, double lMin, double lMax)
{
    currentTemperature = cTemp;
    minLimit = lMin;
    maxLimit = lMax;
}

void Thermometer::showThermometer()
{
    cout << "Minimum Limit: " << minLimit << "C |"; 
    for(double i = minLimit; i < maxLimit; i+=0.1) 
    {
        double precision = 10.0; // Number of decimal places to round to
        double roundedIndex = round(i * precision) / precision; // Round to one decimal place
        double roundedCurrentTemp = round(currentTemperature * precision) / precision; // Round to one decimal place
        if (roundedIndex == roundedCurrentTemp) {
            cout << " " << roundedIndex << "C ";
        } else {
            if (roundedIndex > roundedCurrentTemp) {
                cout << "-";
            } else {
                cout << (char)177;  // ASCII character for a filled block
            }
        }
    }
    cout << "| Maximum Limit: " << maxLimit << "C" << endl;
    cout << "Current Temperature: " << currentTemperature << endl;
}

double Thermometer::increaseTemperature(double newValue) 
{
    if ((currentTemperature + newValue) > maxLimit) {
        cout << "Maximum Limit Reached! Temperature cannot exceed " << maxLimit << "C" << endl;
    } else {
        currentTemperature += newValue;
    }
    return currentTemperature;
}

double Thermometer::decreaseTemperature(double newValue) 
{
    if ((currentTemperature - newValue) < minLimit) {
        cout << "Minimum Limit Reached! Temperature cannot be less than " << minLimit << "C" << endl;
    } else {
        currentTemperature -= newValue;
    }
    return currentTemperature;
}
double Thermometer::getCurrentTemperature() {
    this->showThermometer();
    return this->currentTemperature;
}