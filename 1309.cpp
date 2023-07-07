#include <iostream>
#include <string>
using namespace std;

void generateNextBinary(string &binaryString)
{
    int n = binaryString.length();
    int i = n - 1;

    while (i >= 0 && binaryString[i] == '1')
    {
        binaryString[i] = '0';
        i--;
    }
    if (i >= 0)
    {
        binaryString[i] = '1';
    }
}

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        string binaryString;
        cin >> binaryString;
        generateNextBinary(binaryString);
        cout << binaryString << endl;
    }
    return 0;
}
