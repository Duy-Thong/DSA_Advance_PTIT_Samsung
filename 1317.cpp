#include <bits/stdc++.h>
using namespace std;
void print_path(const vector<char> &path, vector<string> &v)
{
    string s(path.begin(), path.end());
    v.push_back(s);
}
void backtrack(int x, int y, int n, int a[][100], vector<char> &path, vector<string> &v)
{
    if (x == n - 1 && y == n - 1)
    {
        print_path(path, v);
        return;
    }
    if (x < n - 1 && a[x + 1][y] == 1)
    {
        path.push_back('D');
        backtrack(x + 1, y, n, a, path, v);
        path.pop_back();
    }
    if (y < n - 1 && a[x][y + 1] == 1)
    {
        path.push_back('R');
        backtrack(x, y + 1, n, a, path, v);
        path.pop_back();
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[100][100];
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                cin >> a[i][j];
            }
        }
        vector<char> path;
        vector<string> v;
        if (a[0][0] == 1)
        {

            backtrack(0, 0, n, a, path, v);
        }
        if (!v.empty())
        {
            for (int i = 0; i < v.size(); ++i)
            {
                cout << v[i];
                if (i != v.size() - 1)
                {
                    cout << " ";
                }
            }
        }
        else
        {
            cout << "-1";
        }
        cout << endl;
    }

    return 0;
}