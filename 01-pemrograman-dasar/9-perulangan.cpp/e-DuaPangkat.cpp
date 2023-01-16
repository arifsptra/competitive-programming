#include <iostream>

using namespace std;

float N;
bool b=true;

int main(){
    scanf("%f",&N);
    while(N!=1){
        if(N<1){
            b = false;
            break;
        }
        N/=2;
    }
    if(b){
        printf("ya");
    }else{
        printf("bukan");
    }
    return 0;
}