#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    
    pair <int,int>* Commands = new pair <int, int> [N];
    for (int i = 0; i < N; ++i) {
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
    
    auto stack_interpreter = [](int N, pair <int, int>* Commands) {
        int* stack = new int[N];
        int StackTop = -1;
        
        for (int i = 0; i < N; ++i) {
            if (Commands[i].first == 0) {
                stack[++StackTop] = Commands[i].second;
            } else if (Commands[i].first == 1) {
                if (StackTop >= 0) {
                    --StackTop;
                }
            }
            
            if (StackTop >= 0){
                for (int j = StackTop; j >= 0; --j) {
                    cout << stack[j] << " ";
                }
                cout << "\n";
            } else {
                cout << "\n";
            }
        }
        
        delete[] stack;
    };
    
    stack_interpreter (N, Commands);
    delete[] Commands;
    
    return 0;
}