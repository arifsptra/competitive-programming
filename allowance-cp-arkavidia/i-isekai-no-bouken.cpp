#include <iostream>
using namespace std;

const int MAXN = 100005;

int n, k, l, x, y, z;
int a[MAXN];
int dp[MAXN];

int main() {
    cin >> n >> k >> l >> x >> y >> z;
    a[0] = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i <= n; i++) {
        dp[i] = 1e9;
    }
    dp[0] = 0;
    for (int i = 0; i <= n; i++) {
        if (dp[i] + x <= y) {
            dp[i + 1] = min(dp[i + 1], dp[i] + 1);
        }
        for (int j = 1; j <= l; j++) {
            if (i + j <= n) {
                if (dp[i] + (a[i+j] - a[i]) <= y && dp[i] + x <= y) {
                    dp[i+j] = min(dp[i+j], dp[i]+1);
                }
            }
        }
    }
    if (dp[n] > z) {
        cout << -1;
    } else {
        cout << dp[n];
    }
    return 0;
}