#include <iostream>
#include <string>
using namespace std;

string previousNumber(string num)
{
    int n = num.size();
    if (n == 1 && num[0] == '0')
        return "0";

    int i = n - 1;
    while (i >= 0 && num[i] == '0')
    {
        num[i] = '1';
        i--;
    }

    if (i >= 0)
        num[i] = '0'; 

    return num;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << previousNumber(s) << endl;
    }
    return 0;
}
