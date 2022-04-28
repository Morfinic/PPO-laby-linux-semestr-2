#include <iostream>
#include <math.h>
#include "wektor2d.hpp"

Wektor2D::Wektor2D(int _x, int _y): Wektor(_x, _y) {};

void Wektor2D::print()
{
    std::cout << "Wektor2D: [" << Wektor::getX() << ", " << Wektor::getY() << "]\n";
};

float Wektor2D::dlugosc()
{
    return sqrt(pow(Wektor::getX(), 2) + pow(Wektor::getY(), 2));
}

void Wektor2D::mnozeniePrzezLiczbe(int liczba)
{
    Wektor::setX(Wektor::getX() * liczba);
    Wektor::setY(Wektor::getY() * liczba);
};

Wektor2D Wektor2D::operator+(Wektor2D &w)
{
    return Wektor2D(Wektor::getX() + w.getX(), Wektor::getY() + w.getY());
}

Wektor2D Wektor2D::operator-(Wektor2D &w)
{
    return Wektor2D(Wektor::getX() - w.getX(), Wektor::getY() - w.getY());
}
