#include <iostream>
#include <cstdlib>
#include <cmath>
#include "thermometer/Thermometer.h"
using namespace std;

int main(){


    cout << "(char)219 = " << (char)219 << endl; // ■ повний квадрат
    cout << "(char)254 = " << (char)254 << endl; // ■ маленький квадрат
    cout << "(char)177 = " << (char)177 << endl; // ▒ середній блок
    cout << "(char)178 = " << (char)178 << endl; // ▓ темний блок
    cout << "(char)176 = " << (char)176 << endl; // ░ світлий блок
    cout << "(char)220 = " << (char)220 << endl; // ▄ нижній блок
    cout << "(char)223 = " << (char)223 << endl; // ▀ верхній блок

    int f;
    f = 50;
    f = 30 + 40;
    cout << f << endl;

    double debXEnter = 14.0 / 58;
    double part2 = cos(debXEnter);
    cout << "Resultat 14/58 =" << part2 << endl;

    double dodepY = 8.0 / 70;
    double part3 = cos(dodepY);
    cout << "Resultat 8/70 =" << part3 << endl;

    double privZ = 12.0 / 47;
    double part4 = sin(privZ);
    cout << "Resultat 12/47 =" << part4 << endl;

    double exem1 = 80 - 47 /0.2 + 39;
    double part5 =cos(exem1);
    cout << "Resultat exem1 =" << exem1 << endl;

    double buket = 50.0;
    double orange = 30.0;
    cout << "Orange in buket =" << orange << endl;

    cout << "reed gif" << endl;

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
        cout << "Enter value to increase temperature (or a non-numeric value to stop): ";
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
