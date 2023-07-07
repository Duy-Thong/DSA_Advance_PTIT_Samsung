#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void in(const vector<int> &x)
{
    for (int i = 0; i < x.size(); i++)
    {
        cout << x[i] << " ";
    }
    cout << endl;
}

void gen(vector<int> &x)
{
    int N = x.size();
    int i = N - 2;
    while (i >= 0 && x[i] >= x[i + 1])
    {
        i--;
    }
    if (i < 0)
    {
        for (int j = 0; j < N; j++)
        {
            x[j] = j + 1;
        }
    }
    else
    {
        int j = N - 1;
        while (x[j] <= x[i])
        {
            j--;
        }
        swap(x[i], x[j]);
        reverse(x.begin() + i + 1, x.end());
    }
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        vector<int> x(N);
        for (int i = 0; i < N; i++)
        {
            cin >> x[i];
        }

        gen(x);
        in(x);
    }

    return 0;
}
