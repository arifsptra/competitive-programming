#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

const int N = 1e5 + 5;
int n, m, gf[N], b[N], d[N];
long long dp[N][105];

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> gf[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> d[i];
    }
    memset(dp, 0x3f, sizeof(dp));
    dp[1][gf[1]] = b[1];
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            for (int k = 1; k <= m; k++) {
                if (abs(j - k) <= d[i - 1]) {
                    dp[i][j] = min(dp[i][j], dp[i - 1][k] + b[i] + abs(gf[i]-d[i-1]));
                }
            }
        }
    }
    long long ans = 1e18;
    for (int i = 1; i <= m; i++) {
        ans = min(ans, dp[n][i]);
    }
    cout << ans << endl;
    return 0;
}




