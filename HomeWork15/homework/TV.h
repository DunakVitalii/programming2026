#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class TV
{
    private:
    bool bon;
    int channel;

    static bool isValidChannel(int channel) {
        return channel >= 1 && channel <= 15;
    }
    static const int MIN_CHANNEL_NUMBER = 1;
    static const int MAX_CHANNEL_NUMBER = 15;

    public:

    TV() {
        bon = false;
        channel = MIN_CHANNEL_NUMBER;
    }

    bool power(const bool value)
    {
        bon = value;
        return bon;
    }

    bool setChannel(const unsigned int ch)
    {
        if (bon && isValidChannel(ch)) {
            channel = ch;
            return true;
        }
        return false;
    }

    bool isOn() const
    {
        return bon;
    }

    const unsigned int getChannel() const
    {
        return channel;
    }

    void print() const
    {
        if (bon)
            cout << "TV ON, Channel: " << channel << endl;
        else
            cout << "TV OFF" << endl;
    }
};