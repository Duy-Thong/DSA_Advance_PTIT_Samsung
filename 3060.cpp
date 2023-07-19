#include <iostream>
using namespace std;
int count(int N, int prime)
{
    int count = 0;
    while (N % prime == 0)
    {
        count++;
        N /= prime;
    }
    return count;
}
string check(int n, int k)
{
    int countPowerOf2 = 0;
    for (int i = 1; i <= n; i++)
    {
        countPowerOf2 += count(i, 2);
    }
    if (countPowerOf2 >= k)
    {
        return "Yes";
    }
    else
    {
        return "No";
    }
}

int main()
{
    int n, k;
    cin >> n >> k;

    cout << check(n, k) << endl;

    return 0;
}
