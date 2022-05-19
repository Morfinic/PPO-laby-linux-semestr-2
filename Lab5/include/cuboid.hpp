#include "Ibryla.hpp"

class Cuboid: public Ibryla
{
    private:
        double baseSide1, baseSide2, height;
    public:
        Cuboid();
        ~Cuboid();
        void dataEnter();
        void printEdgeLength();
        double calculateArea();
        double calculateVolume();
        void printData();
};
