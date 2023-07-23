#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, k;
vector<int> a;
int minCount = -1;

void backtracking(int idx, int remainingSum, int count) {
    if (remainingSum == 0) {
        if (minCount == -1 || count < minCount) {
            minCount = count;
        }
        return;
    }

    if (idx == n || remainingSum < 0) {
        return;
    }
    backtracking(idx + 1, remainingSum - a[idx], count + 1);
    backtracking(idx + 1, remainingSum, count);
}

int main() {
    cin >> n >> k;

    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    backtracking(0, k, 0);

    cout << minCount << endl;

    return 0;
}
