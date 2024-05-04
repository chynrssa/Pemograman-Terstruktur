#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    
    pair <int, int>* Commands = new pair <int, int> [N];
    for (int i = 0; i < N; ++i){
        string CommandsType;
        cin >> CommandsType;
        
        if (CommandsType == "push") {
            int Numbers;
            cin >> Numbers;
            Commands[i] = {0, Numbers};
        } else {
            Commands[i] = {1, -1};
        }
    }
    
    auto queue_interpreter = [] (int N, pair <int, int>* Commands) {
        const int max_N = 1000;
        int queue[max_N];
        int awal = 0, akhir = -1;
        
        for (int i = 0; i < N; ++i){
            if (Commands[i].first == 0) {
                queue[++akhir] = Commands[i].second;
            } else if (Commands[i].first == 1) {
                if (awal <= akhir) {
                    for (int j = awal; j < akhir; ++j) {
                        queue[j] = queue[j + 1];
                    }
                    --akhir;
                }
            }
            
            if (awal <= akhir) {
                for (int j = awal; j <= akhir; ++j) {
                    cout << queue[j] << " ";
                }
                
                cout << "\n";
                
            } else {
                cout << "\n";
            }
        }
    };
    
    queue_interpreter (N, Commands);
    
    delete[] Commands;
    
    return 0;
}