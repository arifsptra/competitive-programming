#include <iostream>

using namespace std;

int main(){
    int N, M;
    cin >> N >> M ;
    int matrix[N][M];
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin >> matrix[i][j];
        }
    }
    for(int i=0; i<M; i++){
        for(int j=N-1; j>=0; j--){
            cout << matrix[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}