#include "pyramid.hpp"
#include <iostream>
#include <math.h>

Pyramid::Pyramid() {};

Pyramid::~Pyramid() {};

void Pyramid::dataEnter()
{
    double temp;
    std::cout << "Podaj kolejno dlugosc podstawy i wysokosc: \n";
    std::cin >> temp;
    baseSide = temp;
    std::cin >> temp;
    height = temp;
    sidewallHeight = sqrt(pow(baseSide/2, 2) + pow(height, 2));
}

void Pyramid::printEdgeLength()
{
    std::cout << "    /\\.\n"
                "   /  \\ . H = "<<height<<"\n"
                "  /    \\ .\n"
                " /      \\/\n"
                "o--------o\n"
                "    "<<baseSide<<"\n";
}

double Pyramid::calculateArea()
{
    return pow(baseSide, 2) + 2 * baseSide * height;
}

double Pyramid::calculateVolume()
{
    return (pow(baseSide, 2) * height) / 3;
}

void Pyramid::printData()
{

    std::cout << "Pole pow. calk.: " << calculateArea() << "\n"
        "Objetosc: " << calculateVolume() << "\n";
}
