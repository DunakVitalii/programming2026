#include <iostream>
#include "test.h"
using namespace std;
int z = 6;
A::A()
    {
        z--;
    }
    A::A(const A &aa)
    {
        z++;
    }
    A::~A()
    {
        z--;
    }