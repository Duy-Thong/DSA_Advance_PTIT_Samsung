#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, D;
        cin >> N >> D;

        int A[N];
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        D %= N; 
        for (int i = 0; i < N; i++)
        {
            cout << A[(i + D) % N] << " ";
        }
        cout << endl;
    }

    return 0;
}
