#include <iostream>
#include <vector>
using namespace std;

const int MAX_N = 1005;

vector<int> graph[MAX_N];
bool visited[MAX_N];


bool hasPath(int x, int y) {
    visited[x] = true;
    if (x == y) {
        return true;
    }

    for (int i = 0; i < graph[x].size(); ++i) {
        int nextVertex = graph[x][i];
        if (!visited[nextVertex] && hasPath(nextVertex, y)) {
            return true;
        }
    }

    return false;
}
void initVisited(int N) {
    for (int i = 1; i <= N; ++i) {
        visited[i] = false;
    }
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;
        for (int i = 0; i < M; ++i) {
            int u, v;
            cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        int Q;
        cin >> Q;

        while (Q--) {
            int x, y;
            cin >> x >> y;
            initVisited(N);
            if (hasPath(x, y)) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
        for (int i = 1; i <= N; ++i) {
            graph[i].clear();
        }
    }

    return 0;
}
