#include <bits/stdc++.h>
using namespace std;
vector<bool> primes;
void sieveOfEratosthenes(int n)
{
    primes.resize(n + 1, true);
    primes[0] = primes[1] = false;

    for (int i = 2; i * i <= n; i++)
    {
        if (primes[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                primes[j] = false;
            }
        }
    }
}
int countNumbersWithThreeDivisors(long long L, long long R)
{
    int max_range = static_cast<int>(sqrt(R));
    int count = 0;

    for (int i = 2; i <= max_range; i++)
    {
        if (primes[i])
        {
            long long square = static_cast<long long>(i) * static_cast<long long>(i);
            if (square >= L && square <= R)
            {
                count++;
            }
        }
    }

    return count;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;

    int max_range = 1000000;
    sieveOfEratosthenes(max_range);

    while (T--)
    {
        long long L, R;
        cin >> L >> R;
        int result = countNumbersWithThreeDivisors(L, R);
        cout << result << endl;
    }

    return 0;
}
