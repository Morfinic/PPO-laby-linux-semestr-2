#include "Ibryla.hpp"

class Pyramid: public Ibryla
{
    private:
        double baseSide, height, sidewallHeight;
    public:
        Pyramid();
        ~Pyramid();
        void dataEnter();
        void printEdgeLength();
        double calculateArea();
        double calculateVolume();
        void printData();
};
