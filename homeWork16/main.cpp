#include <iostream>
#include <cstdlib>
#include <cmath>
#include "thermometer/Thermometer.h"
using namespace std;

int main(){

    cout << "Enter Min Limit of Thermometer " ;
    double minLimit = 0.0;
    cin >> minLimit;
    cout << "You entered: " << minLimit << endl;

     cout << "Enter Max Limit of Thermometer " ;
    double maxLimit = 0.0;
    cin >> maxLimit;
    cout << "You entered: " << maxLimit << endl;

    cout << "Enter Current Temperature of Thermometer " ;
    double curTemperature = 0.0;
    cin >> curTemperature;
   cout << "You entered: " << curTemperature << endl;

   Thermometer myThermometer(curTemperature, minLimit, maxLimit);

   bool stop = false;
   while (!stop) {
    
        myThermometer.showThermometer();    
        cout << "Enter command (1 to increase temperature, 2 to decrease temperature, or a non-numeric value to stop): ";
        int command;
        if (cin >> command) {
            if (command == 1) {
                cout << "Enter value to increase temperature: ";
                double increaseValue;
                if (cin >> increaseValue) {
                    cout << "Current Temperature after increase: " << myThermometer.increaseTemperature(increaseValue) << endl;
                } else {
                    stop = true;
                    cout << "Stopping temperature increase." << endl;
                }
            } else if (command == 2) {
                cout << "Enter value to decrease temperature: ";
                double decreaseValue;
                if (cin >> decreaseValue) {
                    cout << "Current Temperature after decrease: " << myThermometer.decreaseTemperature(decreaseValue) << endl;
                } else {
                    stop = true;
                    cout << "Stopping temperature decrease." << endl;
                }
            } else {
                cout << "Invalid command. Please enter 1 to increase temperature, 2 to decrease temperature, or a non-numeric value to stop." << endl;
            }
        } else {
            stop = true;
            cout << "Stopping temperature increase." << endl;
        }        
    }
    
    return 0;
}
