#include <bits/stdc++.h>
using namespace std;
vector<string> v;
int n;
int x[100];
string s;
void in()
{
    string tmp = "";
    for (int i = 1; i <= n; i++)
    {
        if (x[i] == 1)
        {
            tmp += s[i - 1];
        }
    }
    v.push_back(tmp);
}
void backtrack(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        x[i] = j;
        if (i == n)
        {
            in();
        }
        else
        {
            backtrack(i + 1);
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        cin >> n;
        cin.ignore();
        cin >> s;
        backtrack(1);
        sort(v.begin(),v.end());
        for(int i=0;i<v.size()-1;i++)
        {
            cout<<v[i]<<" ";


        }
        cout<<v[v.size()-1]<<endl;
        v.clear();
    }
}