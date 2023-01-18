#include <cstdio>

int main() {
  int N;

  scanf("%d", &N);
  for (int i = 0; i < N; i++) {
    int x;
    scanf("%d", &x);

    bool prime = true;
    if (x == 1) {
      prime = false;
    }

    for(int i=2; i*i<=x; i++) {
        if(x%i == 0) {
            prime = false;
        }
    }

    // int divisor = 2;
    // while (divisor < x) {
    //   if (x % divisor == 0) {
    //     prime = false;
    //     break;
    //   }
    //   divisor++;
    // }

    if (prime) {
      printf("YA\n");
    } else {
      printf("BUKAN\n");
    }
  }
}