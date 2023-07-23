#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < n; ++i)
    {
        pq.push(a[i]);
    }

    for (int i = 0; i < k; ++i)
    {
        int top = pq.top();
        pq.pop();
        pq.push(-top);
    }

    long long sum = 0;
    while (!pq.empty())
    {
        int top = pq.top();
        pq.pop();
        sum += top; 
    }

    cout << sum << endl;

    return 0;
}
