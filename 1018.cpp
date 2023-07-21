#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;

int count(int N, int M)
{
    vector<vector<int>> dp(N + 1, vector<int>(M + 1, 0));
    for (int i = 0; i <= N; i++)
    {
        dp[i][0] = 1;
    }
    for (int j = 0; j <= M; j++)
    {
        dp[0][j] = 1;
    }

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= M; j++)
        {
            dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % MOD;
        }
    }

    return dp[N][M];
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, M;
        cin >> N >> M;
        int result = count(N, M);
        cout << result << endl;
    }

    return 0;
}
