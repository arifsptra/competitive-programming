#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    int P[N], result;
    for(int i = 0; i < N; i++){
        cin >> P[i];
    }
    for(int i = 0; i < N; i++){
        if(result < P[i]){
            result=P[i];
        }
    }
    cout << result;
    return 0;	
}