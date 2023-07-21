#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solve(string S, int K)
{
    vector<int> charCount(26, 0);

    for (char c : S)
    {
        charCount[c - 'A']++;
    }
    sort(charCount.rbegin(), charCount.rend());
    for (int i = 0; i < K; i++)
    {
        if (charCount[0] == 0)
        {
            break;
        }
        charCount[0]--;
        sort(charCount.rbegin(), charCount.rend());
    }
    int minValue = 0;
    for (int count : charCount)
    {
        minValue += count * count;
    }

    return minValue;
}

int main()
{
    int T;
    cin >> T;

    for (int t = 0; t < T; t++)
    {
        int K;
        string S;
        cin >> K >> S;

        int result = solve(S, K);
        cout << result << endl;
    }

    return 0;
}
