#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    set<char> se;
    for(auto c:s)
    {
        se.insert(c);
    }
    cout<<se.size();
}