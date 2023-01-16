#include <iostream>

using namespace std;

int N;

int main(){
    scanf("%d",&N);
    if(N==0){
        printf("nol");
    }else if(N>0){
        printf("positif");
    }else{
        printf("negatif");
    }
}