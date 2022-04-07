#include "electric.hpp"
#include <iostream>

Electric::Electric(short batteryCapacity_K, int rocznik_K):
    batteryCapacity(batteryCapacity_K),
    Vehicle(rocznik_K){
        std::cout << "Konstruktor klasy Electric " << batteryCapacity << " " << Vehicle::rocznikGet() << "\n";
    }

short Electric::batteryCapacityGet(){
    return batteryCapacity;
}
