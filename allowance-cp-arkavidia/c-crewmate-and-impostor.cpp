#include <bits/stdc++.h>
using namespace std;
int n, a[100005], ans=0;
map<int, int> mp;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        mp[a[i-1]]++;
    }
    for (int i = 1; i <= n; i++) {
        if (mp[i+1] == 0) ans++;
        // cout << mp[i] << endl;
    }
    cout << ans << endl;
    return 0;
}
