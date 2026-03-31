#include "Oven.h"

Oven::Oven(int x, int y, int z, Hole h) {
    hole = h;
    volume = 0;
    maxVolume = x * y * z;
    meltingSpeed = 0;
    density = 19320;
}; 

int Oven::getMaxVolume(){
    return this->maxVolume;
}
int Oven::getMeltingSpeed() const{
    return this->meltingSpeed;
}
void Oven::setMeltingSpeed(int speed){
    meltingSpeed = speed;
}
int Oven::getVolume(){
    return this->volume;
}
std::string Oven::fitInOven(const Bar& bar) const{
    std::string fitResult = this->hole.fit(bar);   
    return fitResult;
}
void Oven::setVolume(int newVolume){
    this->volume += newVolume;
}

int Oven::getDensity() {
    return this->density;
}