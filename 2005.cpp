#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> se1;
    set<int> se2;
    vector<int> v;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        se1.insert(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin>>x;
        se2.insert(x);
    }
    for(auto it:se1)
    {
        if(se2.find(it)!=se2.end())
        {
            v.push_back(it);
        }
    }
    for(auto it:v)
    {
        cout<<it<<" ";
    }
}