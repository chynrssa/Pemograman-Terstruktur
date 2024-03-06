#include <iostream>
#include <limits>
using namespace std;
int main(){
    int matriks [3][3] = {{15, 23, 5},{10, 22, 1}, {43, 19, 8}};

    int max = numeric_limits <int>::min();
     int min = numeric_limits <int>::max();
     cout << matriks << endl;
    for (int i = 0; i <3; i++){
        for (int j = 0; j < 3; j++){
            cout << matriks[i][j] << " ";
        if(matriks[i][j] > max){
            max = matriks[i][j];
        }
        if (matriks[i][j] < min){
            min = matriks[i][j];
        }
    }
        cout << "\n";
    }
    cout <<"nilai terbesar: " << max << endl;
    cout << "nilai terkecil: " << min << endl;
   return 0;
   
}