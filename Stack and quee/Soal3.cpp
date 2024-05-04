#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    
    int BilBul[N];
    for (int i = 0; i < N; ++i){
        cin >> BilBul[i];
    }
    
    for (int i = 0; i < N; ++i){
        if (BilBul[i] % 2 != 0) {
            cout << BilBul[i] << " ";
        }
    }
    cout << "\n";
    
    return 0;
}