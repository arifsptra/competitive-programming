#include <iostream>

using namespace std;

int N;

int main(){
    scanf("%d",&N);
    if(N>=10000){
        printf("puluhribuan");
    }else if(N>=1000){
        printf("ribuan");
    }else if(N>=100){
        printf("ratusan");
    }else if(N>=10){
        printf("puluhan");
    }else if(N>0){
        printf("satuan");
    }
    return 0;
}