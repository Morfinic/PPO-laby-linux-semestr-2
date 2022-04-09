#include <iostream>
#include "include/gas.hpp"
#include "include/electric.hpp"

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

    //car2.pokaz();
    //car3.pokaz();

    return 0;
}
