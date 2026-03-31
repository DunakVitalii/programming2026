#pragma once
#include "Hole.h"
#include <string>

class Oven
{
    public:

        Oven(int x, int y, int z, Hole h);

        std::string fitInOven(const Bar& bar) const;
        int getMeltingSpeed() const;
        void setMeltingSpeed(int speed);
        int getMaxVolume();
        int getVolume();
        void setVolume(int newVolume);
        int getDensity();

    private:
        Hole hole;
        int volume;
        int maxVolume;
        int meltingSpeed;
        int density;
};