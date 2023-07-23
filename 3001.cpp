#include <iostream>
#include <vector>

using namespace std;

void printSpiralMatrix(int n)
{
    vector<vector<int>> matrix(n, vector<int>(n, 0));

    int num = 1;
    int rowBegin = 0, rowEnd = n - 1;
    int colBegin = 0, colEnd = n - 1;

    while (num <= n * n)
    {
        for (int i = colBegin; i <= colEnd; ++i)
        {
            matrix[rowBegin][i] = num++;
        }
        ++rowBegin;
        for (int i = rowBegin; i <= rowEnd; ++i)
        {
            matrix[i][colEnd] = num++;
        }
        --colEnd;
        for (int i = colEnd; i >= colBegin; --i)
        {
            matrix[rowEnd][i] = num++;
        }
        --rowEnd;
        for (int i = rowEnd; i >= rowBegin; --i)
        {
            matrix[i][colBegin] = num++;
        }
        ++colBegin;
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    printSpiralMatrix(n);

    return 0;
}
