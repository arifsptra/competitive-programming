#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;

int n;
long long ans;

struct team {
    int id, power, a, b;
} t[N];

bool cmp(team x, team y) {
    return x.power < y.power;
}

int main() {
    cin >> n;
    for (int i = 1; i <= 2 * n; i++) {
        cin >> t[i].power >> t[i].a >> t[i].b;
        t[i].id = i;
    }
    sort(t + 1, t + 2 * n + 1, cmp);
    for (int i = 1; i <= 2 * n - 1; i++) {
        if (i % 2) ans += t[i].a + t[i + 1].b;
        else ans += t[i].b + t[i + 1].a;
    }
    cout << ans << endl;
    return 0;
}
