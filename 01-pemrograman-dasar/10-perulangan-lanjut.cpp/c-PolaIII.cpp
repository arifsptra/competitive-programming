#include <iostream>

using namespace std;

int N, a=0;

int main(){
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i>=j){
                printf("%d", a);
                a++;
                if(a==10){
                    a=0;
                }
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}