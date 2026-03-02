#ifndef TV_H
#define TV_H

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class TV
{
    private:

        bool bon;
        int channel;
        static bool isValidChannel(int channel); 
        static const int MIN_CHANNEL_NUMBER = 1;
        static const int MAX_CHANNEL_NUMBER = 15;
        // New member variable to track if the TV is broken
        bool isBroken = false;

    public:

        TV();
        bool power(const bool value);
        bool setChannel(const unsigned int ch);
        bool isOn() const;
        unsigned int getChannel() const;
        void print() const;
        // New method to set the TV as broken
        void setBroken(bool value);
        // New method to check if the TV is broken
        bool checkBroken();

   
};

#endif