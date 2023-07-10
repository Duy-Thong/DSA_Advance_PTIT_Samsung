#include <bits/stdc++.h>
using namespace std;

long long a[100];

void init()
{
    a[1] = 1;
    for (int i = 2; i < 60; i++)
    {
        a[i] = a[i - 1] * 2 + 1;
    }
}

long long find(long long n, long long i)
{
    if (n == 1)
    {
        return 1;
    }
    long long mid=a[n]/2+1;
    if(i==mid)
    {
        return n;
    }
    else
    {
        if(i>mid)
        {
            return find(n-1,i-mid);
        }
        if(i<mid)
        {
            return find(n-1,i);
        }
    }
}
int main()
{
    init();
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        long long i;
        cin >> n >> i;
        long long res=find(n,i);
        cout<<res<<endl;
    }
    return 0;
}