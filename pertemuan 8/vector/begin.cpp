#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<char>huruf = {'j','i','h','a','n'};

    for (vector<char>::iterator it = huruf.begin(); it != huruf.end();it++)
    cout << *it << " ";
}