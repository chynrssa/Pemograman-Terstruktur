#include <iostream>
using namespace std;

template <class T>
class Trapezoid{
    public:
    T base1;
    T base2;
    T height;

    Trapezoid (T b1, T b2, T h) : base1(b1), base2(b2), height(h){}
    Trapezoid(){}

    T Area() const {
        return (base1 + base2) * height / 2;
    }

    void ShowAttributes() const {
        cout << "Base 1: " << base1 << endl;
        cout << "Base 2: " << base2 << endl;
        cout << "Height: " << height << "\n";
    }
};