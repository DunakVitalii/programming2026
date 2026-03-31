#include "Bar.h"
#include <algorithm>
#include <iostream>
using namespace std;

#include <random>
int Bar::getRandomInt(int min, int max)
{
    static std::random_device rd;
    static std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(min, max);

    return dist(gen);
}

Bar::Bar() {
    this->dx = this->getRandomInt(2, 7);
    this->dy = this->getRandomInt(2, 7);
    this->dz = this->getRandomInt(2, 7);
    cout << "GEN Bar(" << this->dx << ", " << this->dy << ", " << this->dz << ")" << endl; 
}
    

Bar::Bar(int x, int y, int z) : dx(x), dy(y), dz(z) {}

void Bar::rotateX() { std::swap(dy, dz); }
void Bar::rotateY() { std::swap(dx, dz); }
void Bar::rotateZ() { std::swap(dx, dy); }

int Bar::x() const { return dx; }
int Bar::y() const { return dy; }
int Bar::z() const { return dz; }
