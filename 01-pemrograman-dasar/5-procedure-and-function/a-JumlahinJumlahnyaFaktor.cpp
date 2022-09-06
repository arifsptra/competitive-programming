#include <iostream>

using namespace std;

int g(int X){
    int result=0;
    for(int i=1; i<=X; i++){
        if(X%i==0){
            result++;
        }
    }
    return result;
}

int h(int X){
    int result=0;
    for(int i=0; i<X; i++){
        result+=g(i+1);
    }
    return result;
}

int main(){
    int X;
    cin >> X;
    cout << h(X);
    return 0;
}