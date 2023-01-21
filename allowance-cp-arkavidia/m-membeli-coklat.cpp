#include <iostream>
#include <vector>
#include <queue>
#define ll long long
using namespace std;

const int MAXN = 1e5 + 5;

vector<int> graph[MAXN];
ll price[MAXN];
ll min_price[MAXN];
bool visited[MAXN];

void bfs(int start) {
    queue<int> q;
    q.push(start);
    visited[start] = true;
    min_price[start] = price[start];

    while(!q.empty()) {
        int current = q.front();
        q.pop();

        for(int i = 0; i < graph[current].size(); i++) {
            int neighbor = graph[current][i];
            if(!visited[neighbor]) {
                visited[neighbor] = true;
                min_price[neighbor] = min(min_price[current], price[neighbor]);
                q.push(neighbor);
            }
        }
    }
}

int main() {
    int n, x;
    cin >> n >> x;
    for(int i = 1; i <= n; i++) {
        cin >> price[i];
        min_price[i] = 1e18;
    }

    int u, v;
    for(int i = 1; i < n; i++) {
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    bfs(x);

    for(int i = 1; i <= n; i++) {
        cout << min_price[i] << " ";
    }
    cout << endl;

    return 0;
}
