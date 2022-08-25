#include <iostream>
#include <string>

using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    string result;
    if((A*A + B*B) > C*C) {
        result = "segitiga";
    }else {
        result = "bukan segitiga";
    }
    cout << result;
    return 0;
}