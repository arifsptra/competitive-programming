#include <iostream>

using namespace std;

int main() {
    int a, b;
    char opr;
    cin >> a >> opr >> b;
    int result;
    if(opr == '+') {
        result = a+b;
    }else if(opr == '-') {
        result = a-b;
    }else if(opr == '*') {
        result = a*b;
    }else if(opr == '/') {
        result = a/b;
    }else if(opr == '%') {
        result = a%b;
    }
    cout << result;
    return 0;
}