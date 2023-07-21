#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long max_sum = a[0];
        long long cur_sum = a[0];
        int start_idx = 0;
        int end_idx = 0;
        int cur_start_idx = 0;

        for (int i = 1; i < n; i++)
        {
            if (cur_sum < 0)
            {
                cur_sum = a[i];
                cur_start_idx = i;
            }
            else
            {
                cur_sum += a[i];
            }

            if (cur_sum > max_sum)
            {
                max_sum = cur_sum;
                start_idx = cur_start_idx;
                end_idx = i;
            }
        }
        cout << max_sum << endl; 
    }
    return 0;
}