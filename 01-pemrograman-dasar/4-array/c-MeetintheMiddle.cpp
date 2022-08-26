#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    int A[N];
    for(int i=0; i<N; i++){
        cin >> A[i];
    }
    int X=0, result[N];
    for(int i=0; i<N; i++){
        if(i%2==0){
            result[i] = A[X];
            X++;
        }else {
            result[i] = A[N-X];
        }
    }
    for(int i=0; i<N; i++){
        cout << result[i] << " ";
    }
    return 0;
}