#include "vehicle.hpp"
#include <iostream>

Vehicle::Vehicle(int rocznik_K): rocznik(rocznik_K){
    std::cout<<"Konstruktor klasy vehicle" << rocznik << "\n";
}

int Vehicle::rocznikGet(){
    return rocznik;
}
