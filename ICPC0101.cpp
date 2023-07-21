#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    bool removed = true;
    while (removed)
    {
        removed = false;
        vector<int> new_A;
        for (int i = 0; i < A.size(); i++)
        {
            if (i < A.size() - 1 && (A[i] + A[i + 1]) % 2 == 0)
            {
                removed = true;
                i++;
            }
            else
            {
                new_A.push_back(A[i]);
            }
        }
        A = new_A;
    }
    cout << A.size() << endl;

    return 0;
}
