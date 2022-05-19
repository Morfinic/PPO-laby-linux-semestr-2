#include <iostream>
#include "include/cuboid.hpp"
#include "include/pyramid.hpp"
#include "include/ball.hpp"

int main()
{
    Ibryla* interfaceArray[3]{new Cuboid(), new Pyramid(), new Ball()};

    std::cout << "Prostopadloscian: \n";
    interfaceArray[0]->dataEnter();
    interfaceArray[0]->printEdgeLength();
    interfaceArray[0]->printData();

    std::cout << "\nOstroslup prawidlowy czworokatny: \n";
    interfaceArray[1]->dataEnter();
    interfaceArray[1]->printEdgeLength();
    interfaceArray[1]->printData();

    std::cout << "\nKula: \n";
    interfaceArray[2]->dataEnter();
    interfaceArray[2]->printEdgeLength();
    interfaceArray[2]->printData();

    for(int i = 0; i <= 2; i++)
        delete interfaceArray[i];

    return 0;
}
