#include "hybrid.hpp"
#include <iostream>

Hybrid::Hybrid(int rocznik_, int moc_, int przyspieszenie_, int zasieg_, std::string rodzaj_, std::string marka_, std::string model_, std::string typPaliwa_, short poziomBaterii_):
    Car(rocznik_, moc_, przyspieszenie_, zasieg_, rodzaj_, marka_, model_),
    Gas(rocznik_, moc_, przyspieszenie_, zasieg_, rodzaj_, marka_, model_, typPaliwa_),
    Electric(rocznik_, moc_, przyspieszenie_, zasieg_, rodzaj_, marka_, model_, poziomBaterii_)
{
    std::cout << "Konstruktor klasy hybrid\n";
}

Hybrid::~Hybrid()
{
    std::cout << "Destruktor klasy hybrid\n";
}

void Hybrid::pokaz()
{
    Car::pokaz();
    Gas::pokazTypPaliwa();
    Electric::pokazPoziomBaterii();
}
