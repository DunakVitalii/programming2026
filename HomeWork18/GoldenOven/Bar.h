#pragma once

class Bar {
public:
    Bar();
    Bar(int x, int y, int z);

    void rotateX();
    void rotateY();
    void rotateZ();

    int x() const;
    int y() const;
    int z() const;

    

private:
    int dx, dy, dz;
    int getRandomInt(int min, int max);    
};