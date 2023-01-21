#include <iostream>
using namespace std;

const int MAXN = 100000;

int n;
int m[MAXN + 5];
int c[MAXN + 5];

int main() {
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> m[i] >> c[i];
    }
    int ans = 0;
    for(int i = 1; i <= n; i++) {
        int cnt = 0;
        for(int j = 1; j <= n; j++) {
            if(m[i] != m[j]) {
                cnt++;
            }
        }
        ans += cnt*(cnt-1)/2;
    }
    cout << ans << endl;
    return 0;
}
