#include <iostream>
using namespace std;
template <typename T>
T jumlah (T a, T b){
    return a + b;
}
int main(){
    int a = 10, b = 20;
    double x = 2.5, y = 7.5;
        cout << "Hasil int adalah : " << jumlah(a,b) << endl;
        cout << "Hasil double adalah : " << jumlah(x,y) << endl;
}