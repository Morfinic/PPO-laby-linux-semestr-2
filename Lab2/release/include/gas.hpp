#pragma once
#include "car.hpp"

class Gas: virtual public Car{
    std::string typPaliwa;
public:
    Gas(int rocznik_, int moc_, int przyspieszenie_, int zasieg_, std::string rodzaj_, std::string marka_, std::string model_, std::string typPaliwa_);
    ~Gas();
    void pokaz();
    void pokazTypPaliwa();
};
