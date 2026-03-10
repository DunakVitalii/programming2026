#include <iostream>
#include "test\test.h"

using namespace std;

int main()
{
    cout <<"Hello player. Now you have 100 health" << endl;
    Human player;
    fire flame(1);

    int button;

    cout << "dont press 1 to tuch fire" << endl;
    cin >> button;

    if (button == 1)
    {
        flame.attack(player);
    }

    cout << "IDIOT. Your health = " << player.getHealth() << endl;

    return 0;
}
