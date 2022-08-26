#include <iostream>

using namespace std;

int main() {
    int A, B, X, Y;
    cin >> A >> B >> X >> Y;
    while(X<Y) {
        cout << X << endl;
        X = A*X+B;
    }
    return 0;
}