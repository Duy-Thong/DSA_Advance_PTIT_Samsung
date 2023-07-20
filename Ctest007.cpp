#include <bits/stdc++.h>
using namespace std;
string check(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '0'&&s[i] != '1' && s[i] != '2')
        {
            return "NO";
        }
    }
    return "YES";
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        cin >> s;
        cout << check(s) << endl;
    }
}