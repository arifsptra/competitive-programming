#include <iostream>

using namespace std;

int main(){
    // int i = 1;
    // int n = 10;
    // for (int i = 1; i <= n; i++) {
    //     printf("%d", 2 * i);
    // }

    // int i = 2;
    // int n = 10;
    // while(i <= 2 * n)
    // {
    //     printf("%d", i);
    //     i += 2;
    // }

    int a = 45;
    int b = 56;
    do {
        a = a - 3;
        b = b - 5;
    } while ((a >= 0) || (b >= 0));
    printf("%d %d", a, b);

    return 0;
}