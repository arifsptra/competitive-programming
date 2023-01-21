#include <iostream>
#include <vector>
using namespace std;

const int N = 2e5 + 5;

vector<int> adj[N];
int sz[N];

void dfs(int u, int p) {
  sz[u] = 1;
  for (int v : adj[u]) {
    if (v != p) {
      dfs(v, u);
      sz[u] += sz[v];
    }
  }
}

int main() {
  int n;
  cin >> n;
  for (int i = 1; i < n; i++) {
    int u, v;
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  dfs(1, 0);
  int ans = 0;
  for (int i = 1; i <= n; i++) {
    ans += (sz[i] + 1) / 2;
  }
  cout << ans << endl;
  return 0;
}
