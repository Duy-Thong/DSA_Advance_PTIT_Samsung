#include <bits/stdc++.h>
using namespace std;

bool is_valid(string K)
{
    for (int i = 1; i < K.length(); i++)
    {
        if (abs(K[i] - K[i - 1]) == 1)
        {
            return false;
        }
    }
    return true;
}

void generate_permutations(int N, string K, vector<bool> &visited, vector<string> &result)
{
    if (K.length() == N)
    {
        if (is_valid(K))
        {
            result.push_back(K);
        }
        return;
    }

    for (int i = 1; i <= N; i++)
    {
        if (!visited[i])
        {
            visited[i] = true;
            generate_permutations(N, K + to_string(i), visited, result);
            visited[i] = false;
        }
    }
}

vector<string> list_xa_cach_numbers(int N)
{
    vector<string> result;
    vector<bool> visited(N + 1, false);
    generate_permutations(N, "", visited, result);
    return result;
}

int main()
{
    int num_test_cases;
    cin >> num_test_cases;

    for (int t = 0; t < num_test_cases; t++)
    {
        int N;
        cin >> N;

        vector<string> xa_cach_numbers = list_xa_cach_numbers(N);

        for (const auto &num : xa_cach_numbers)
        {
            cout << num << endl;
        }
        cout << endl;
    }

    return 0;
}
