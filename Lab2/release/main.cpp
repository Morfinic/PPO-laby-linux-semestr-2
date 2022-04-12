#include <iostream>
#include "include/hybrid.hpp"

void sprawdzBieg(Car car){
    std::cout<<"Bieg: "<<car.bieg<<"\n";
}

std::ostream &operator<<(std::ostream &output, const Car &c){
    return output<<"\n\nOverloaded<<\nBieg: "<<c.bieg<<"\nPredkosc: "<<c.predkosc<<"\n";
}

int main(){
    Car car1{1998, 12, 8, 10000, "rodzaj", "BMW", "C13-d"};
    Gas car2{1920, 4, 2, 2500, "rodzaj", "Audi", "ogA4", "petrol"};
    Electric car3{1940, 10, 20, 400000, "rodzaj", "Polonez", "E-green4", 74};
    Hybrid car4{1844, 44, 80, 120, "rodzaj4", "Fiat", "model", "pb89", 12};

    //Predkosc jest zwiekszana
    //car2.uruchom();
    //car2.przyspiesz();
    //car4.uruchom();
    //car4.przyspiesz();

    //std::cout<<"\nCar 1\n";
    //car1.pokaz();

    //std::cout<<"\nCar 2\n";
    //car2.pokaz();

    //std::cout<<"\nCar 3\n";
    //car3.pokaz();

    //std::cout<<"\nCar 4\n";
    //car4.pokaz();

    return 0;
}
