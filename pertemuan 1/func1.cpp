#include <iostream>
using namespace std;

int pertambahan(int a, int b){
    return a + b;
}
int pengurangan(int a, int b){
    return a - b;
}
int perkalian (int a, int b){
    return a * b;
}
double pembagian(int a, int b){
    if(b != 0){
        return a / b;
    } else {
        cout << "Pembagian tidak bisa dibagi nol.\n";
    }
    
}

int main(){
    double x,y;
    cout << "Silahkan masukkan angka pertama : ";
    cin >> x;
    cout << "Silahkan masukkan angka kdeua : ";
    cin >> y;

    cout << "=======================================" << endl;

    cout << "Hasil Penjumlahan " << x << " + " << y << " adalah : " << pertambahan(x,y) << "\n";
    cout << "Hasil Pengurangan " << x << " - " << y << " adalah : " << pengurangan(x,y) << "\n";
    cout << "Hasil Perkalian " << x << " * " << y << " adalah : " << perkalian(x,y) << "\n";
    cout << "Hasil Pembagian " << x << " / " << y << " adalah : " << pembagian(x,y) << "\n";
    
    return 0;
}