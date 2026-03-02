#include "TV.h"
#include <iostream>
using namespace std;

TV::TV() {
    bon = false;
    channel = MIN_CHANNEL_NUMBER;
}

bool TV::isValidChannel(int channel){
    return channel >= 1 && channel <= 15;
}

bool TV::power(const bool value) {
    if (isBroken) {
        cout << "TV is broken. Please repair it.\n";
        return false;
    }

    bon = value;
    return bon;
}

bool TV::setChannel(const unsigned int ch) {
    if (isBroken) {
        cout << "TV is broken. Please repair it.\n";
        return false;
    }

    if (!bon) {
        cout << "TV is OFF\n";
        return false;
    }

    if (this->isValidChannel(ch)) {
        channel = ch;
        return true;
    }

    cout << "Channel " << ch << " is invalid\n";
    this->setBroken(true);
    
    return false;
}

bool TV::isOn() const {
    if (isBroken) {
        cout << "TV is broken. Please repair it.\n";
        return false;
    }
    return bon;
}

unsigned int TV::getChannel() const {
    if (isBroken) {
        cout << "TV is broken. Please repair it.\n";
        return MIN_CHANNEL_NUMBER;
    }
    return channel;
}

void TV::print() const {
    if (isBroken) {
        cout << "TV is broken. Please repair it.\n";
        return;
    }
    cout << "Power: " << (bon ? "ON" : "OFF") << endl;
    cout << "Channel: " << channel << endl;
}
// New method to set the TV as broken
 void TV::setBroken(bool broken) {
    isBroken = broken;
}

// New method to check if the TV is broken 
bool TV::checkBroken() {
    return isBroken;
}
