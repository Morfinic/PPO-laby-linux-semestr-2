#include <iostream>
#include "car.hpp"

void sprawdzBieg(Car car){
    std::cout<<"Bieg: "<<car.bieg<<"\n";
}

std::ostream &operator<<(std::ostream &output, const Car &c){
    return output<<"\n\nOverloaded<<\nBieg: "<<c.bieg<<"\nPredkosc: "<<c.predkosc<<"\n";
}

int main(){
    Car car1;
   
    sprawdzBieg(car1);
    car1.uruchom();
    car1.przyspiesz();
    car1.przyspiesz();
    car1.przyspiesz();
    car1.przyspiesz();
    sprawdzBieg(car1);
    car1.hamuj();
    car1.hamuj();
    car1.hamuj();
    sprawdzBieg(car1);

    std::cout<<car1;

    return 0;
}
