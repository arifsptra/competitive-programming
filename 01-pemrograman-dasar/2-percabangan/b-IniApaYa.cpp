#include <iostream>
#include <string>

using namespace std;

int main() {
    char s[100];
    cin >> s;
    string result;
    if(isalpha(s[0])) {
        result = "kata";
    }else if(s[0] > '0') {
        result = "bilangan bulat positif";
    }else if(s[0] < '0') {
        result = "bilangan bulat negatif";
    }else if(s[0] == '0') {
        result = "nol";
    }
    cout << result;
    return 0;
}
    // if(s == "0") {
    //     result = "nol";
    // }else if(s < "0") {
    //     result = "bilangan bulat negatif";
    // }else if(s > "0") {
    //     result = "bilangan bulat positif";
    // }else if(s == ) {
    //     result = "kata";
    // }