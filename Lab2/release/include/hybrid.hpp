#pragma once
#include "gas.hpp"
#include "electric.hpp"

class Hybrid : virtual public Gas, virtual public Electric
{
    public:
        Hybrid(int rocznik_, int moc_, int przyspieszenie_, int zasieg_, std::string rodzaj_, std::string marka_, std::string model_, std::string typPaliwa_, short poziomBaterii_);
        ~Hybrid();
        void pokaz();
};
