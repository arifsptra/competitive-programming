#include <iostream>

using namespace std;

int A[3][3];

int main(){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> A[i][j];
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << A[j][i] << " ";
        }
        cout << endl;
    }
}