#include <iostream>
using namespace std;
int main(){
    int N, M, P;
    cin >> N >> M >> P;
    int matriksA[N][M], matriksB[M][P];
    int res[101][101] = {0};
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin >> matriksA[i][j];
        }
    }
    for(int i=0; i<M; i++){
        for(int j=0; j<P; j++){
            cin >> matriksB[i][j];
        }
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<P; j++){
            for(int k=0; k<M; k++){
                res[i][j] += matriksA[i][k] * matriksB[k][j];
            }
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}