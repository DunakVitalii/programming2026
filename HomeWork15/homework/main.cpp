#include <iostream>
#include "TV.h"
using namespace std;
int main() {
    TV myTV;
    myTV.print();

    myTV.power(true);
    myTV.setChannel(1);
    myTV.print();

    myTV.setChannel(16);
    myTV.print();

    myTV.power(false);
    myTV.print();

    return 0;
}