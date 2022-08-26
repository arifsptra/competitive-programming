#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    int A[N];
    for (int i=0; i<N; i++){
        cin >> A[i];
    }
    for (int i=N; i>0; i--){
        cout << A[i-1] << endl;
    }
    return 0;
}