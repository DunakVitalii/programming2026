#include <iostream>
#include "test\test.h"

using namespace std;
void test()
{
    {
        A a,
         b(a),
         c(b);
    }
    // cout << z;
}
int main()
{
test();
int x = 7;
int a = x++;
cout << "a = " << a << endl;
cout << "x = " << x << endl;

    //     cout <<"Hello player. Now you have 100 health" << endl;
    //     Human player;
    //     fire flame(1);

    //     int button;

    //     cout << "dont press 1 to tuch fire" << endl;
    //     cin >> button;

    //     if (button == 1)
    //     {
    //         flame.attack(player);
    //     }

    //     cout << "IDIOT. Your health = " << player.getHealth() << endl;

    return 0;
}
