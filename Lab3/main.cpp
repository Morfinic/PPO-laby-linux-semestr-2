#include <iostream>
#include "include/wektor2d.hpp"
#include "include/wektor3d.hpp"

int main()
{
    Wektor2D w1(1,2);
    w1.print();
    std::cout << "Wektor w1 dlugosc: "<< w1.dlugosc() << "\n";
    w1.mnozeniePrzezLiczbe(2);
    w1.print();
    std::cout << "Wektor w1 dlugosc po *2: "<< w1.dlugosc() << "\n";

    Wektor2D w2(3,4);
    Wektor2D w3 = w1 + w2;
    std::cout<< "Wektor w3 [w1+w2 {3, 4}]: ";
    w3.print(); std::cout << "\n";

    Wektor2D w4 = w1 - w2;
    std::cout<< "Wektor w4 [w1+w2 {3, 4}]: ";
    w4.print(); std::cout << "\n";

    Wektor3D w5(1,2,3);
    w5.print();
    std::cout << "Wektor w5 dlugosc: "<< w5.dlugosc() << "\n";
    w5.mnozeniePrzezLiczbe(2);
    w5.print();
    std::cout << "Wektor w5 dlugosc po *2: "<< w5.dlugosc() << "\n";

    Wektor3D w6(3,4,5), w7 = w5 + w6, w8 = w5 - w6;
    std::cout<< "Wektor w7 [w5{2, 4, 6} + w6{3, 4, 5}]: ";
    w7.print();
    std::cout<< "Wektor w8 [w5{2, 4, 6} + w6{3, 4, 5}]: ";
    w8.print();

    return 0;
}
