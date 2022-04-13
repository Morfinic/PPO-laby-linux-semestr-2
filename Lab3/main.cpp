#include <iostream>
#include "include/wektor2d.hpp"

int main()
{
    Wektor2D v1{1, 2};

    std::cout<<v1.dlugoscWektora(v1.getX(), v1.getY())<< "\n";

    return 0;
}
