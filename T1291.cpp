#include <iostream>
#include <string>
using namespace std;

bool is_valid_operation(string operation)
{
    int a = operation[0] - '0';
    int b = operation[4] - '0';
    int c = operation[8] - '0';
    return (a + b == c);
}

int main()
{
    int test_cases;
    cin >> test_cases;
    cin.ignore();
    while (test_cases--)
    {
        string operation;
        getline(cin, operation);
        if (is_valid_operation(operation))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
