#include "cuboid.hpp"
#include <iostream>

Cuboid::Cuboid() {};

Cuboid::~Cuboid() {};

void Cuboid::dataEnter()
{
    double temp;
    std::cout << "Podaj kolejno boki podstawy i wysokosc: \n";
    std::cin>>temp;
    baseSide1 = temp;
    std::cin>>temp;
    baseSide2 = temp;
    std::cin>>temp;
    height = temp;
}

void Cuboid::printEdgeLength()
{
    std::cout << "   o--------o\n"
                 "  /        /|\n"
                 " /        / |" <<height<<"\n"
                 "o--------o  |\n"
                 "|        |  o\n"
                 "|        | /\n"
                 "|        |/ "<<baseSide2<<"\n"
                 "o--------o\n"
                 "    "<< baseSide1 << "\n";
}

double Cuboid::calculateArea()
{
    return ((baseSide1 * baseSide2) + (baseSide1 * height) + (baseSide2 * height)) * 2;
}

double Cuboid::calculateVolume()
{
    return baseSide1 * baseSide2 * height;
}

void Cuboid::printData()
{
    std::cout << "Pole pow. calk.: " << calculateArea() << "\n"
        "Objetosc: " << calculateVolume() << "\n";
}
