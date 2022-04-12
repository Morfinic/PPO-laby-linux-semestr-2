#include "car.hpp"
#include <iostream>

int Car::liczbaSamochodow{0};

Car::Car(int rocznik_, int moc_, int przyspieszenie_, int zasieg_, std::string rodzaj_, std::string marka_, std::string model_):
    rocznik(rocznik_),
    moc(moc_),
    przyspieszenie(przyspieszenie_),
    zasieg(zasieg_),
    rodzaj(rodzaj_),
    marka(marka_),
    model(model_),
    predkosc(0),
    bieg(1),
    stanSilnika(false)
{
    std::cout << "Konstruktor klasy Car\n";
    liczbaSamochodow++;
    std::cout << "Liczba samochodow: " << liczbaSamochodow << "\n";
}

Car::~Car()
{
    std::cout << "Destruktor klasy Car\n";
    liczbaSamochodow--;
    std::cout << "Liczba samochodow: " << liczbaSamochodow << "\n";
}

void Car::uruchom(){
    stanSilnika = true;
}

void Car::wylacz(){
    stanSilnika = false;
}

void Car::przyspiesz(){
    if(stanSilnika == true){
        if(predkosc % 20 == 0 && predkosc != 0)
            biegNastepny();
        predkosc+=10;
    }
    else
        std::cout<<"Wylaczony silnik\n";
}

void Car::hamuj(){
    if(stanSilnika == true){
        predkosc-=10;
        if(predkosc % 20 == 0 && predkosc != 0)
            biegPoprzedni();
    }
    else
        std::cout<<"Wylaczony silnik\n";
}

void Car::biegNastepny(){
    if(bieg == 6) {}
    else
        bieg++;
}

void Car::biegPoprzedni(){
    if(bieg == 0) {}
    else
        bieg--;
}

void Car::pokaz()
{
    std::cout << "Stan silnika: " << stanSilnika << "\n";
    std::cout << "Rocznik: " << rocznik << "\n";
    std::cout << "Moc: " << moc << "\n";
    std::cout << "Przyspieszenie: " << przyspieszenie << "\n";
    std::cout << "Zasieg: " << zasieg << "\n";
    std::cout << "Predkosc: " << predkosc << "\n";
    std::cout << "Bieg: " << bieg << "\n";
    std::cout << "Rodzaj: " << rodzaj << "\n";
    std::cout << "Marka: " << marka << "\n";
    std::cout << "Model: " << model << "\n";
}
