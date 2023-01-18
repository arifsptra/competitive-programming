#include <cstdio>

int main() {
  int N;

  scanf("%d", &N);
  for (int i = 0; i < N; i++) {
    int x;
    scanf("%d", &x);

    bool prime = true;
    int p=0;
    for(int i=2; i<x; i++) {
        if(x%i == 0) {
            p++;
            if(p>2){
                prime = false;
                break;
            }
        }
    }

    if (prime) {
      printf("YA\n");
    } else {
      printf("BUKAN\n");
    }
  }
}