#include "hybrid.hpp"
#include <iostream>

Hybrid::Hybrid(std::string fuelType_K, short batteryCapacity_K, int rocznik_K):
    Gas(fuelType_K, rocznik_K),
    Electric(batteryCapacity_K, rocznik_K),
    Vehicle(rocznik_K){
        std::cout << "Konstruktor klasy Hybrid" << Gas::fuelTypeGet() << " " <<
            Electric::batteryCapacityGet() << " " << Vehicle::rocznikGet() << "\n";
    };
