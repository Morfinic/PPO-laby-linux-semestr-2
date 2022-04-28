#include "wektor.hpp"

class Wektor2D : public Wektor
{
    public:
        Wektor2D(int _x, int _y);
        void print();
        float dlugosc();
        void mnozeniePrzezLiczbe(int liczba);
        Wektor2D operator+(Wektor2D &w);
        Wektor2D operator-(Wektor2D &w);
};
