#include <iostream>
#include <vector>
using namespace std;

void in(const vector<int> &combination)
{
    for (int i = 0; i < combination.size(); i++)
    {
        cout << combination[i] << " ";
    }
    cout << endl;
}
void gen(vector<int> &combination, int N, int K)
{
    int i = K - 1;
    while (i >= 0 && combination[i] == N - K + i + 1)
    {
        i--;
    }
    if (i < 0)
    {
        for (int j = 0; j < K; j++)
        {
            combination[j] = j + 1;
        }
    }
    else
    {
        combination[i]++;
        for (int j = i + 1; j < K; j++)
        {
            combination[j] = combination[i] + j - i;
        }
    }
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, K;
        cin >> N >> K;

        vector<int> combination(K);
        for (int i = 0; i < K; i++)
        {
            cin >> combination[i];
        }

        gen(combination, N, K);
        in(combination);
    }

    return 0;
}
