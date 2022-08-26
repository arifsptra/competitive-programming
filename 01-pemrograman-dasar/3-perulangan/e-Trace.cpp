#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    int A[N][N], result=0;
    for(int i= 0; i < N; i++){
        for(int j= 0; j < N; j++){
            cin >> A[i][j];
            result+=A[i][j];
        }
        cout << endl;
    }
    cout << result/N;
    return 0;
}