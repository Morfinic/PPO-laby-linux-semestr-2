#include <iostream>
#include "wektor.hpp"

Wektor::Wektor(int _x, int _y): x(_x), y(_y) {};

int Wektor::getX() {
    return x;
};

int Wektor::getY() {
    return y;
};

void Wektor::setX(int _x)
{
    x = _x;
}

void Wektor::setY(int _y)
{
    y = _y;
}

