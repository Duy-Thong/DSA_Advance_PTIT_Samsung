#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &arr)
{
    int result = 0;
    for (int num : arr)
    {
        result ^= num;
    }
    return result;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        vector<int> arr(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> arr[i];
        }

        int res = solve(arr);
        cout << res << endl;
    }

    return 0;
}
