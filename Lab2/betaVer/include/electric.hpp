#pragma once
#include "vehicle.hpp"

class Electric: virtual public Vehicle{
    unsigned short batteryCapacity;
    public:
        Electric(short batteryCapacity_K, int rocznik_K);
        short batteryCapacityGet();
};
