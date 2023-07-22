#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> v(100);
int x[100];
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        x[i] = i + 1;
    }
    do
    {
        for (int i = 0; i < n; i++)
        {
            cout << v[x[i]-1]<<" ";
        }
        cout << endl;
    } while (next_permutation(x, x + n));
}