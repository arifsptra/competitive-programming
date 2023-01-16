#include <iostream>

using namespace std;

int x1, x2, y1, y2, x, y;

int main(){
    scanf("%d", &x1);
    scanf("%d", &y1);
    scanf("%d", &x2);
    scanf("%d", &y2);
    x = x1-x2;
    y = y1-y2;
    if(x<0){
        x *= -1;
    }
    if(y<0){
        y *= -1;
    }
    printf("%d", x+y);
    return 0;
}