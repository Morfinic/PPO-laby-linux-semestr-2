#include "gas.hpp"
#include <iostream>

Gas::Gas(std::string fuelType_K, int rocznik_K): 
    fuelType(fuelType_K),
    Vehicle(rocznik_K){
        std::cout << "Konstruktor klasy Gas " << Vehicle::rocznikGet() << " " << fuelType << "\n";
}

std::string Gas::fuelTypeGet(){
    return fuelType;
}
