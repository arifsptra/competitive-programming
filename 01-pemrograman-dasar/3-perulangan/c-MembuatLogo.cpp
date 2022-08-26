#include <iostream>

using namespace std;

int main() {
    int N, M, L;
    cin >> N >> M >> L;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(i<L || i>=N-L){
                cout << "*";
            }else {
                if(j<L){
                cout << "*";
                }else {
                    cout << ".";
                }
            }
        }
        cout << endl;
    }
    return 0;
}