#pragma once

class Wektor
{
    private:
        int x;
        int y;
    public:
        Wektor(int _x, int _y);
        int getX();
        int getY();
        void setX(int _x);
        void setY(int _y);
        virtual float dlugosc() = 0;
        virtual void print() = 0;
        virtual void mnozeniePrzezLiczbe(int liczba) = 0;
};
