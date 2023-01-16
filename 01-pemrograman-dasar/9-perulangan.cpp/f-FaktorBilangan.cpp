#include <iostream>

using namespace std;

int N;

int main(){
    scanf("%d",&N);
    for(int i=N; i>0; i--){
        if(N%i == 0){
            cout << i << endl;
        }
    }
    return 0;
}