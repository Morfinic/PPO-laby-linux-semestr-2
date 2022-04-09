#pragma once
#include <ostream>

class Car{
    bool stanSilnika;
    unsigned int bieg, predkosc, rocznik, moc, przyspieszenie, zasieg;
    std::string rodzaj, marka, model;
    void biegNastepny();
    void biegPoprzedni();
public:
    Car(int rocznik_, int moc_, int przyspieszenie_, int zasieg_, std::string rodzaj_, std::string marka_, std::string model_);
    void uruchom();
    void wylacz();
    void przyspiesz();
    void hamuj();
    friend void sprawdzBieg(Car);
    friend std::ostream &operator<<(std::ostream &output, const Car &c);
    void pokaz();
};
