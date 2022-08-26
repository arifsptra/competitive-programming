#include <iostream>

using namespace std;

int main() {
    int A, B, C, X, Z, result=0;
    cin >> A >> B >> C >> X;
    Z=X;
    do{
        Z = (A*Z + B) % C;
        result++;
    }while(Z!=X);
    cout << result;
    return 0;	
}