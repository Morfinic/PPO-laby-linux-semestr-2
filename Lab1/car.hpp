#include <ostream>

class Car{
    bool stanSilnika;
    unsigned int bieg, predkosc;
    void biegNastepny();
    void biegPoprzedni();
public:
    void uruchom();
    void wylacz();
    void przyspiesz();
    void hamuj();
    Car();
    friend void sprawdzBieg(Car);
    friend std::ostream &operator<<(std::ostream &output, const Car &c);
};
