#include <iostream>
#include <queue>
#include <vector>

using namespace std;

void BFS(vector<vector<int>>& graph, int start) {
    int V = graph.size();
    vector<bool> visited(V, false);  

    
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        cout << u+1 << " "; 

       
        for (int v : graph[u]) {
            if (!visited[v]) {
                q.push(v);
                visited[v] = true;
            }
        }
    }
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int V, E, start;
        cin >> V >> E >> start;

        vector<vector<int>> graph(V);
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            graph[u - 1].push_back(v - 1);
            graph[v - 1].push_back(u - 1);  
        }
        BFS(graph, start - 1);
        cout << endl;
    }

    return 0;
}
