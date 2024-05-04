#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    int data[n];
    for (int i=0;i<n;i++)
        cin>>data[i];
    for (int i=1;i<n;i+=2)
        cout<<data[i]<<" ";
}