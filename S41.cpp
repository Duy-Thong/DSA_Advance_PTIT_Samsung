#include <iostream>
#include <vector>
#include <queue>
#define MOD 1000000007
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        priority_queue<long long, vector<long long>, greater<long long>> pq; 

        for (int i = 0; i < N; i++)
        {
            long long len;
            cin >> len;
            pq.push(len);
        }

        long long total_cost = 0;

        while (pq.size() > 1)
        {
            long long a = pq.top();
            pq.pop();

            long long b = pq.top();
            pq.pop();

            long long new_len = (a + b) % MOD;
            total_cost = (total_cost + new_len) % MOD;

            pq.push(new_len);
        }

        cout << total_cost << endl;
    }

    return 0;
}
