#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int num_test_cases;
    cin >> num_test_cases;

    for (int t = 0; t < num_test_cases; t++)
    {
        string N;
        cin >> N;
        sort(N.begin(), N.end());
        while (N[0] == '0')
        {
            N.erase(0, 1);
        }
        cout << N << endl;
    }

    return 0;
}
