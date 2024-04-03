#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<char>huruf = {'j','i','h','a','n'};
    char a[] = {'h','a','i'};
    int len = sizeof(a)/sizeof(a[0]);
    huruf.assign(a,a+len);
    
}