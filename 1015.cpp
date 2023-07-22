#include<bits/stdc++.h>
using namespace std;
int fnMod(string num)
{
    int n = num.length();
    if (n < 2)
    {
        num = "0" + num;
    }
    int lastTwoDigits = (num[n - 2] - '0') * 10 + (num[n - 1] - '0');
    if (lastTwoDigits % 4 == 0)
        return 4;

    else
        return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << fnMod(s) << endl;
    }

    return 0;
}
