#include <iostream>

using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    int A[N][M];
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin >> A[i][j];
        }
    }
    for(int i=0; i<M; i++){
        for(int j=0; j<N; j++){
            cout << A[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}