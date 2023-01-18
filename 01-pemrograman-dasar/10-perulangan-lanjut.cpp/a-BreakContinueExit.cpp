#include <iostream>

using namespace std;

int N;

int main(){
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        if(i%10==0){
            continue;
        }
        if(i==42){
            printf("ERROR\n");
            break;
        }
        printf("%d\n",i);
    }
    return 0;
}