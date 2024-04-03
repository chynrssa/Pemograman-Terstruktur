#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> angka = {2,4,5,7,8};
    if(angka.empty())
    cout << "kosong";
    else 
    cout << "berisi";
}