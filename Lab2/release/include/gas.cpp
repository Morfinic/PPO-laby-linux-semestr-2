#include "gas.hpp"
#include <iostream>

Gas::Gas(int rocznik_, int moc_, int przyspieszenie_, int zasieg_, std::string rodzaj_, std::string marka_, std::string model_, std::string typPaliwa_):
    Car(rocznik_, moc_, przyspieszenie_, zasieg_, rodzaj_, marka_, model_),
    typPaliwa(typPaliwa_)
{
    std::cout << "Konstruktor klasy Gas\n";
}

void Gas::pokaz()
{
    Car::pokaz();
    std::cout << "Typ paliwa: " << typPaliwa << "\n";
}
