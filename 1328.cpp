#include <iostream>
#include <vector>
using namespace std;
const int MOD = 1000000007;
vector<vector<int>> addMatrix(vector<vector<int>>& A, vector<vector<int>>& B) {
    int n = A.size();
    vector<vector<int>> res(n, vector<int>(n, 0));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            res[i][j] = (A[i][j] + B[i][j]) % MOD;
        }
    }

    return res;
}
vector<vector<int>> multiplyMatrix(vector<vector<int>>& A, vector<vector<int>>& B) {
    int n = A.size();
    vector<vector<int>> res(n, vector<int>(n, 0));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
                res[i][j] = (res[i][j] + (1LL * A[i][k] * B[k][j]) % MOD) % MOD;
            }
        }
    }

    return res;
}
vector<vector<int>> powerMatrix(vector<vector<int>>& A, int k) {
    int n = A.size();
    if (k == 1) {
        return A;
    }

    vector<vector<int>> half_pow = powerMatrix(A, k / 2);
    vector<vector<int>> result = multiplyMatrix(half_pow, half_pow);

    if (k % 2 == 0) {
        return result;
    } else {
        return multiplyMatrix(result, A);
    }
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<vector<int>> A(N, vector<int>(N));
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                cin >> A[i][j];
            }
        }
        vector<vector<int>> X = powerMatrix(A, K);
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                cout << X[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
