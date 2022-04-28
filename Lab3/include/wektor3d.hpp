#include "wektor.hpp"

class Wektor3D : public Wektor
{
    private:
        int z;
    public:
        Wektor3D(int _x, int _y, int _z);
        void print();
        float dlugosc();
        void mnozeniePrzezLiczbe(int liczba);
        Wektor3D operator+(Wektor3D &w);
        Wektor3D operator-(Wektor3D &w);
};
