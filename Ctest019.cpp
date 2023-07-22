#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sort_column(vector<vector<int>> &matrix, int col_index)
{
    vector<int> column_elements;
    for (int i = 0; i < matrix.size(); ++i)
    {
        column_elements.push_back(matrix[i][col_index - 1]);
    }
    sort(column_elements.begin(), column_elements.end());
    for (int i = 0; i < matrix.size(); ++i)
    {
        matrix[i][col_index - 1] = column_elements[i];
    }
}

int main()
{
    int test_cases;
    cin >> test_cases;

    while (test_cases--)
    {
        int N, M, i;
        cin >> N >> M >> i;
        vector<vector<int>> A(N, vector<int>(M));
        for (int row = 0; row < N; ++row)
        {
            for (int col = 0; col < M; ++col)
            {
                cin >> A[row][col];
            }
        }
        sort_column(A, i);
        for (int row = 0; row < N; ++row)
        {
            for (int col = 0; col < M; ++col)
            {
                cout << A[row][col] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
