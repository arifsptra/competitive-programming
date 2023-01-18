#include <iostream>

using namespace std;

int N;

int main(){
    scanf("%d",&N);
    for(int i=N-1;i<N;i--){
        for(int j=0;j<N;j++){
            if(j<i){
                printf(" ");
            }else {
                printf("*");
            }
        }
        printf("\n");
        if(i==0){
            break;
        }
    }
    return 0;
}