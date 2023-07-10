#include <iostream>
#include <queue>
using namespace std;

long long solve(int N, vector<int> &lengths)
{
    priority_queue<int, vector<int>, greater<int>> pq(lengths.begin(), lengths.end());
    long long min_cost = 0;
    while (pq.size() > 1)
    {
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        int cost = a + b;
        min_cost += cost;
        pq.push(cost);
    }

    return min_cost;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        vector<int> lengths(N);
        for (int i = 0; i < N; i++)
        {
            cin >> lengths[i];
        }
        long long res = solve(N, lengths);
        cout << res << endl;
    }

    return 0;
}
