#pragma once
#include "car.hpp"

class Electric: virtual public Car{
    unsigned short poziomBaterii;
public:
    Electric(int rocznik_, int moc_, int przyspieszenie_, int zasieg_, std::string rodzaj_, std::string marka_, std::string model_, short poziomBaterii_);
    ~Electric();
    void pokaz();
    void pokazPoziomBaterii();
};
