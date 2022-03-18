#include "car.hpp"
#include <iostream>

Car::Car():predkosc(0),bieg(1),stanSilnika(false){}

void Car::uruchom(){
    stanSilnika = true;
}

void Car::wylacz(){
    stanSilnika = false;
}

void Car::przyspiesz(){
    if(stanSilnika == true){
        if(predkosc % 20 == 0 && predkosc != 0)
            biegNastepny();
        predkosc+=10;
    }
    else
        std::cout<<"Wylaczony silnik\n";
}

void Car::hamuj(){
    if(stanSilnika == true){
        predkosc-=10;
        if(predkosc % 20 == 0 && predkosc != 0)
            biegPoprzedni();
    }
    else
        std::cout<<"Wylaczony silnik\n";
}

void Car::biegNastepny(){
    if(bieg == 6) {}
    else
        bieg++;
}

void Car::biegPoprzedni(){
    if(bieg == 0) {}
    else
        bieg--;
}
