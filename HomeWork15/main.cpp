#include <iostream>
#include "TV/TV.h"
using namespace std;
int main() {
    
    TV myTV;
    myTV.print();

    myTV.power(true);
    myTV.setChannel(5);
    myTV.print();

    cout << "Enter an  channel number <1-15> and try do not break the TV: ";
    int channelNumber;
    cin >> channelNumber;

    // Attempt to set an invalid channel to break the TV
    myTV.setChannel(channelNumber);
    myTV.print();

    // Attempt to set channel while TV is broken
    cout << "Test 1 Set channel number - 5 \n";
    myTV.setChannel(5);
    // Attempt to power on the TV while it is broken
    cout << "Test 2 Set TV OFF\n";
    myTV.power(false);
    // Attempt to print the TV state while it is broken
    cout << "Test 3 print the TV state \n";
    myTV.print();

    return 0;
}