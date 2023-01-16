#include <iostream>

using namespace std;

int N, result=0;

int main(){
    scanf("%d",&N);
    int B[N];
    for(int i=0;i<N;i++){
        scanf("%d",&B[i]);
    }
    for(int i=0;i<N;i++){
        result+=B[i];
    }
    printf("%d",result);
    return 0;
}