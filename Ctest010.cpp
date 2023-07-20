#include<bits/stdc++.h>
using namespace std;
string encode(string s)
{
    int cnt=1;
    string res="";
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==s[i+1])
        {
            cnt++;
        }
        else
        {
            res+=s[i];
            res+=to_string(cnt);
            cnt=1;
        }
    }
    return res;
}
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    {
       string s;
       cin>>s;
        cout<<encode(s)<<endl;
    }
    
}