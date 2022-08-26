#include <iostream>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    int A[K], B[N+1];
    for(int i = 0; i <= N; i++){
        B[i]=0;
    }
    for(int i = 0; i < K; i++) {
        cin >> A[i];
        B[A[i]]=1;
    }
    for(int i = 1; i <= N; i++){
        if(B[i] == 0){
            cout << i << " ";
        }
    }
    return 0;
}