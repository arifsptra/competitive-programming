#include <iostream>
#include <algorithm>

using namespace std;

int N, M, K, P, Y, Z;
int A[100005], B[100005], C[100005];
long long dp[100005];

int main() {
    cin >> N >> M >> K >> P >> Y >> Z;

    for (int i = 1; i <= N; i++) cin >> A[i];
    for (int i = 1; i <= M; i++) cin >> B[i];
    for (int i = 1; i <= K; i++) cin >> C[i];

    sort(A+1, A+N+1, greater<int>());
    sort(B+1, B+M+1, greater<int>());
    sort(C+1, C+K+1, greater<int>());

    for (int i = 1; i <= N; i++) dp[i] = dp[i-1] + A[i];
    for (int i = N+1; i <= N+M; i++) dp[i] = max(dp[i-1], dp[i-1] + B[i-N] - Y);
    for (int i = N+M+1; i <= N+M+K; i++) {
        if (P > 0) dp[i] = max(dp[i-1], dp[i-1] + C[i-N-M]);
        else dp[i] = max(dp[i-1], dp[i-1] + C[i-N-M] / Z);
        P--;
    }

    cout << dp[N+M+K] << endl;

    return 0;
}
