#include "wektor2d.hpp"
#include <math.h>

Wektor2D::Wektor2D(float x_, float y_):
    x(x_),
    y(y_) {}

float Wektor2D::dlugoscWektora(float x, float y)
{
    return sqrt(x*x + y*y);
}

float Wektor2D::getX()
{
    return x;
}

float Wektor2D::getY()
{
    return y;
}
