#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    sort(A.begin(), A.end());
    int maxProduct = A[N - 1] * A[N - 2];
    if (A[N - 3] > 0) {
        maxProduct = max(maxProduct, A[N - 1] * A[N - 2] * A[N - 3]);
    }
    if (A[0] < 0 && A[1] < 0 && A[N - 1] > 0) {
        maxProduct = max(maxProduct, A[0] * A[1] * A[N - 1]);
    }
    if (A[0] < 0 && A[N - 2] > 0 && A[N - 1] > 0) {
        maxProduct = max(maxProduct, A[N - 1] * A[N - 2] * A[N - 3]);
    }
    cout << maxProduct << endl;

    return 0;
}
