#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> angka = {2,4,5,7,8};
    list<int>::iterator it = angka.begin();
    ++it;
    angka.insert(it,0);

    ++it;
    ++it;
    int arr[]= {11,12,13};
    angka.insert(it,begin(arr),end(arr));
}