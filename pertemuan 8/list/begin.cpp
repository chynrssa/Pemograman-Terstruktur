#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> angka = {2,4,5,7,8};
    list<int>::iterator it;
    
        for(it = angka.begin(); it != angka.end(); ++it)
            cout << *it << " ";
}