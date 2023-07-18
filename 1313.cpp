#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int M[1000];
        for (int i = 1; i <= k; i++)
        {
            cin >> M[i];
        }
        M[0] = 0;
        bool check = true;
        for (int i = k; i >= 1; i--)
        {
            if (M[i] != M[i - 1] + 1)
            {
                M[i]--;
                check = false;
                if (M[k] != n)
                {
                    for (int j = i + 1; j <= k; j++)
                    {
                        M[j]++;
                    }
                }
                break;
            }
        }
        if (check && M[1] == 1)
        {
            for (int i = 1; i <= k; i++)
                cout << n - k + i << " ";
        }
        else
        {
            for (int i = 1; i <= k; i++)
            {
                cout << M[i] << " ";
            }
        }
        cout << endl;
    }
}