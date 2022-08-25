#include <iostream>
#include <string>

using namespace std;

int main(){
    int N, K;
    cin >> N >> K;
    string result;
    if(N%K==0){
        result = "Hore ^_^";
    }else {
        result = "Kecewa :(";
    }
    cout << result;
    return 0;
}