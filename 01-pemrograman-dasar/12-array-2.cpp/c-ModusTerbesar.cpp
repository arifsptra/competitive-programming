#include <cstdio>

int main(){
    int N, num, res, modus=0;
    scanf("%d",&N);
    int A[1001]={0};
    for(int i=0; i<N; i++){
        scanf("%d", &num);
        A[num]++;
        if(A[num]>modus){
            res = num;
            modus = A[num];
        }else if(A[num]==modus){
            if(num>res) res = num;
        }
    }
    printf("%d", res);
    return 0;
}