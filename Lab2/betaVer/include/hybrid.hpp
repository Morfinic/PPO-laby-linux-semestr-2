#include "gas.hpp"
#include "electric.hpp"
#include <string>

class Hybrid: public Gas, public Electric{
    public:
        Hybrid(std::string fuelType_K, short batteryCapacity_K, int rocznik_K);
};
