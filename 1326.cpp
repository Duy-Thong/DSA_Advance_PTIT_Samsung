#include <bits/stdc++.h>
using namespace std;

long long fibo[100];

void precomputeFibo()
{
    fibo[1] = 1;
    fibo[2] = 1;
    for (int i = 3; i <=93; i++)
    {
        fibo[i] = fibo[i - 2] + fibo[i - 1];
    }
}

char find(int n, long long i)
{
    if (n == 1)
    {
        return 'A';
    }
    if (n == 2)
    {
        return 'B';
    }
    if (i > fibo[n - 2])
    {
        return find(n - 1, i - fibo[n - 2]);
    }
    else
    {
        return find(n - 2, i);
    }
}
int main()
{
    precomputeFibo();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long i;
        cin >> n >> i;
        char res = find(n, i);
        cout << res << endl;
    }
    return 0;
}