#include <iostream>
#include <math.h>
#include "wektor3d.hpp"

Wektor3D::Wektor3D(int _x, int _y, int _z): Wektor(_x, _y), z(_z) {};

void Wektor3D::print()
{
    std::cout << "Wektor3D: [" << Wektor::getX() << ", " << Wektor::getY() <<", " << z << "]\n";
};

float Wektor3D::dlugosc()
{
    return sqrt(pow(Wektor::getX(), 2) + pow(Wektor::getY(), 2) + pow(z, 2));
}

void Wektor3D::mnozeniePrzezLiczbe(int liczba)
{
    Wektor::setX(Wektor::getX() * liczba);
    Wektor::setY(Wektor::getY() * liczba);
    z *= liczba;
};

Wektor3D Wektor3D::operator+(Wektor3D &w)
{
    return Wektor3D(Wektor::getX() + w.getX(), Wektor::getY() + w.getY(), z + w.z);
}

Wektor3D Wektor3D::operator-(Wektor3D &w)
{
    return Wektor3D(Wektor::getX() - w.getX(), Wektor::getY() - w.getY(), z - w.z);
}
