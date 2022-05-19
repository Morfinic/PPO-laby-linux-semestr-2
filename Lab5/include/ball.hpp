#include "Ibryla.hpp"

class Ball: public Ibryla
{
    private:
        double diameter;
    public:
        Ball();
        ~Ball();
        void dataEnter();
        void printEdgeLength();
        double calculateArea();
        double calculateVolume();
        void printData();
};
