#include <iostream>
using namespace std;

class Human
{
private:
    double health;

public:
    Human()
    {
        health = 100.0;
    }

    double getHealth()
    {
        return health;
    }

    void takeDamage(double dmg)
    {
        health -= dmg;

        if (health < 0)
            health = 0;
    }
};

class fire
{
private:
    double firePower;

public:
    fire(double power)
    {
        firePower = power;
    }

    void attack(Human &h)
    {
        cout << "OMG: " << firePower << endl;
        h.takeDamage(firePower);
    }
};