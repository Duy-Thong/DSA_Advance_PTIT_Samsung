#include <bits/stdc++.h>
using namespace std;

string solve(string s)
{
    int i = s.length() - 1;
    int carrier = 0;

    while (i > 0)
    {
        if (s[i] - '0' >= 5)
        {
            if (s[i] == '9')
            {
                s[i] = '0';
                carrier = 1;
            }
            else
            {
                s[i] = '0';
                s[i - 1] += 1;
                carrier = 0;
            }
        }
        else
        {
            s[i] = '0';
            carrier = 0;
        }

        i--;
    }

    if (carrier)
    {
        if (s[0] == '9')
        {
            s[0] = '0';
            s = '1' + s;
        }
        else
        {
            s[0] += 1;
        }
    }

    return s;
}


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << solve(s) << endl;
    }
}
