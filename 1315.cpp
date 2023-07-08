#include <iostream>
using namespace std;

void init(int x[], int n, bool unused[])
{
    for (int i = 1; i <= n; i++)
    {
        x[i] = i;
        unused[i] = true;
    }
}

void in(int x[], int n)
{
    for (int i = 1; i <=n; i++)
    {
        cout << x[i];
    }
    cout << " ";
}

void backtrack_permutation(int i, int n, int x[], bool unused[])
{
    for (int j = n; j >= 1; j--)
    {
        if (unused[j])
        {
            unused[j] = false;
            x[i] = j;
            if (i == n)
            {
                in(x, n);
            }
            else
            {
                backtrack_permutation(i + 1, n, x, unused);
            }
            unused[j] = true;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int x[1000];
        bool unused[1000];
        cin >> n;
        init(x, n, unused);
        backtrack_permutation(1, n, x, unused);
        cout << endl;
    }
    return 0;
}
