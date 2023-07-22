#include <iostream>
#include <cmath>
using namespace std;
int countEvenDivisors(int n)
{
    int count = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (i % 2 == 0)
            {
                count++;
            }
            if (n / i != i && (n / i) % 2 == 0)
            {
                count++;
            }
        }
    }

    return count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int result = countEvenDivisors(n);
        cout << result << endl;
    }
    return 0;
}
