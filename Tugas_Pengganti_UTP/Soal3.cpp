#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

template <class T>
class Trapezoid {
    private:
    T base1;
    T base2;
    T height;

    public:

    Trapezoid() : base1(10), base2(10), height(10){}
    Trapezoid(T b1, T b2, T h) : base1(b1), base2(b2), height(h){}

    void setBase1(T b1) {
        this -> base1 = b1;
    }
    void setBase2(T b2) {
        this -> base2 = b2;
    }
    void setHeight (T h) {
        this -> height = h;
    }

    T getBase1() const {
        return this -> base1;
    }
    T getBase2() const {
        return this -> base2;
    }
    T getHeight() const {
        return this -> height;
    }

    T calculateArea() const {
        return (this -> base1 + this -> base2) * this -> height / 2;
    }

    T calculatePerimeter() const {
        T side = sqrt (pow ((this -> height), 2) + pow((this -> base2 - this base1) /2 , 2));
        return 2 * side + this -> base1 + this -> base2;
    }

};