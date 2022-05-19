#include "ball.hpp"
#include <iostream>
#include <math.h>
#define PI 3.14

Ball::Ball() {};

Ball::~Ball() {};

void Ball::dataEnter()
{
    double temp;
    std::cout << "Podaj srednice: \n";
    std::cin >> temp;
    diameter = temp;
}

void Ball::printEdgeLength()
{
    std::cout << "Srednica kuli: " << diameter << "\n";
}

double Ball::calculateArea()
{
    return 4 * PI * pow(diameter, 2);
}

double Ball::calculateVolume()
{
    return (4 * PI * pow(diameter, 3)) / 3;
}

void Ball::printData()
{
    std::cout << "Pole powierzchni calkowitej: " << calculateArea() << 
        "\nObjetosc: " << calculateVolume() << "\n";
}
