#include <iostream>

using namespace std;

int N, A, B;

int main(){
    cin >> N;
    int bil[N];
    for(int i=0; i<N; i++){
        cin >> bil[i];
        if(i==0){
            A = B = bil[i];
        }else if(bil[i]>A){
            A = bil[i];
        }else if(bil[i]<B){
            B = bil[i];
        }
    }
    printf("%d %d",A,B);
    return 0;
}