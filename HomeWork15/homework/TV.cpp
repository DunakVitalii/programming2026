#include "TV.h"
#include <iostream>
using namespace std;

bool TV::power(const bool value) {
    bon = value;
    return bon;
}

bool TV::setChannel(const unsigned int ch) {

    if (!bon) {
        cout << "TV is OFF\n";
        return false;
    }

    if (isValidChannel(ch)) {
        channel = ch;
        return true;
    }

    return false;
}

bool TV::isOn() const {
    return bon;
}

const unsigned int TV::getChannel() const {
    return channel;
}

void TV::print() const {

    cout << "Power: " << (bon ? "ON" : "OFF") << endl;
    cout << "Channel: " << channel << endl;

}
