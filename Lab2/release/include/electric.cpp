#include "electric.hpp"
#include <iostream>

Electric::Electric(int rocznik_, int moc_, int przyspieszenie_, int zasieg_, std::string rodzaj_, std::string marka_, std::string model_, short poziomBaterii_):
    Car(rocznik_, moc_, przyspieszenie_, zasieg_, rodzaj_, marka_, model_),
    poziomBaterii(poziomBaterii_)
{
    std::cout << "Konstruktor klasy Electric\n";
}

Electric::~Electric()
{
    std::cout << "Destruktor klasy Electric\n";
}

void Electric::pokaz()
{
    Car::pokaz();
    std::cout << "Poziom baterii: " << poziomBaterii << "\n";
}

void Electric::pokazPoziomBaterii()
{
    std::cout << "Poziom baterii: " << poziomBaterii << "\n";
}
