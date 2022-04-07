#pragma once
#include "vehicle.hpp"
#include <string>

class Gas: virtual public Vehicle{
    std::string fuelType;
    public:
        Gas(std::string fuelTupe_K, int rocznik_K);
        std::string fuelTypeGet();
};
