#pragma once
#include "Bar.h"
#include <string>

class Hole {
public:
    Hole();
    Hole(int x, int y);

    std::string fit(const Bar& bar) const;

private: 
    int a, b;
};