#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> angka = {2,4,5,7,8};
    list<int>::iterator it = angka.begin();
    angka.clear();
    cout << angka.size();
}