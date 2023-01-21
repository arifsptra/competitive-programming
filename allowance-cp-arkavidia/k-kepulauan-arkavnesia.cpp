#include <iostream>
#include <vector>
using namespace std;

const int N = 1e5 + 5;
int n, m, q;
int h[N];
vector<int> adj[N];

//Floyd Warshall Algorithm
void floydWarshall() {
    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                h[i] = min(h[i], h[j] + h[k]);
            }
        }
    }
}

int main() {
    cin >> n >> m >> q;
    for (int i = 1; i <= n; i++) {
        cin >> h[i];
    }
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    floydWarshall();
    for (int i = 0; i < q; i++) {
        int t, u, v;
        cin >> t >> u >> v;
        if (t == 1) {
            h[u] = v;
        } else if (t == 2) {
            cout << h[u] + h[v] << endl;
        }
    }
    return 0;
}
