#include<bits/stdc++.h>
using namespace std;

vector<int> adj[10000];
bool visited[10000];

void dfs(int u) {
    cout << u << " ";
    visited[u] = true;

    for (int v : adj[u]) {
        if (!visited[v]) {
            dfs(v);
        }
    }
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int V, E, u;
        cin >> V >> E >> u;

        for (int i = 1; i <= V; i++) {
            adj[i].clear();
        }

        for (int i = 0; i < E; i++) {
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }

        memset(visited, false, sizeof(visited));

        dfs(u);
        cout << endl;
    }

    return 0;
}
