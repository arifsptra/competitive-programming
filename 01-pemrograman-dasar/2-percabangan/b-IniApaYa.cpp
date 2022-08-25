#include <iostream>
#include <string>

using namespace std;

int main() {
    char s[100];
    cin >> s;
    string result;
    if(s[0] == '0') {
        result = "nol";
    }else if(s[0] > '0') {
        result = "bilangan bulat positif";
    }else if(s[0] < '0') {
        result = "bilangan bulat negatif";
    }else if(s[0] == 'a' || 'b' || 'c' || 'd' || 'e' || 'f' || 'g' || 'h' || 'i' || 'j' || 'k' || 'l' || 'm' || 'n' || 'o' || 'p' || 'q' || 'r' || 's' || 't' || 'u' || 'v' || 'w' || 'x' || 'y' || 'z') {
        result = "kata";
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