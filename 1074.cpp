#include <bits/stdc++.h>
using namespace std;
long long solve(int n)
{
    long long sum = 0;
    while (n % 2 == 0)
    {
        sum += 2;
        n = n / 2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            sum += i;
            n = n / i;
        }
    }

    if (n > 2)
        sum += n;
    return sum;
}
int main()
{
    int n;
    cin >> n;
    long long sum = 0;
    while (n--)
    {
        int x;
        cin >> x;
        sum += solve(x);
    }
    cout << sum;
}
