#include <iostream>
using namespace std;

long long tinh_tong(int n)
{
    long long S = 0;
    long long tich = 1;
    for (int i = 1; i <= n; i++)
    {
        tich *= i;
        S += tich;
    }
    return S;
}

int main()
{
    int n;
    cin >> n;
    cout << tinh_tong(n) << endl;

    return 0;
}
