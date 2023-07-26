#include <iostream>
#include <vector>
using namespace std;
int xorBit(int a, int b)
{
    return (a ^ b);
}
void generateGrayCode(int n, vector<int> &grayCode)
{
    if (n <= 0)
        return;
    grayCode.push_back(0);
    grayCode.push_back(1);
    for (int bit = 2; bit < (1 << n); bit = bit << 1)
    {
        for (int i = grayCode.size() - 1; i >= 0; i--)
        {
            grayCode.push_back(grayCode[i] | bit);
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;

        vector<int> grayCode;
        generateGrayCode(n, grayCode);
        for (int code : grayCode)
        {
            for (int i = n - 1; i >= 0; i--)
            {
                cout << ((code >> i) & 1);
            }
            cout << " ";
        }
        cout<<endl;
    }
    return 0;
}
