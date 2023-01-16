#include <iostream>
#include <cmath>

using namespace std;

float N;
int resultFloor, resultCeiling, bilbul;

int main(){
    scanf("%f",&N);
    bilbul = int(N);
    if(N==bilbul){
        resultFloor = N;
        resultCeiling = N;
    }else if(N>0){
        resultFloor = N;
        resultCeiling = N+1;
    }else if(N<0){
        resultFloor = N-1;
        resultCeiling = N;
    }
    printf("%d %d",resultFloor, resultCeiling);
    return 0;
}