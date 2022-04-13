#include "wektor.hpp"

class Wektor2D : public Wektor
{
    private:
        float x;
        float y;
    public:
        Wektor2D(float x, float y);
        virtual float dlugoscWektora(float x, float y);
        virtual float skalarWektora(float x1, float y1, float x2, float y2);
        float getX();
        float getY();
};
