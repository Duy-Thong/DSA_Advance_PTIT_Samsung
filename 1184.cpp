#include <iostream>
#include <vector>

using namespace std;

bool dfs(vector<vector<int>> &graph, int start, int end, vector<bool> &visited, vector<int> &path)
{
    visited[start] = true;
    path.push_back(start);
    if (start == end)
    {
        return true;
    }
    for (int neighbor : graph[start])
    {
        if (!visited[neighbor])
        {
            if (dfs(graph, neighbor, end, visited, path))
            {
                return true;
            }
        }
    }
    path.pop_back();
    return false;
}

vector<int> find_path_dfs(vector<vector<int>> &graph, int start, int end)
{
    vector<bool> visited(graph.size(), false);
    vector<int> path;
    if (dfs(graph, start, end, visited, path))
    {
        return path;
    }
    else
    {
        return {-1};
    }
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int V, E, s, t;
        cin >> V >> E >> s >> t;
        vector<vector<int>> graph(V + 1);
        for (int i = 0; i < E; i++)
        {
            int u, v;
            cin >> u >> v;
            graph[u].push_back(v);
        }

        vector<int> result = find_path_dfs(graph, s, t);
        for (int node : result)
        {
            cout << node << " ";
        }
        cout << endl;
    }

    return 0;
}
