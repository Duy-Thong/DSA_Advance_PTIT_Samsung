#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > res;
vector<int> current;

void solve(int a[], int n, int x, int start) {
    if (x == 0) {
        res.push_back(current);
        return;
    }
    for (int i = start; i < n; i++) {
        if (x - a[i] >= 0) {
            current.push_back(a[i]);
            solve(a, n, x - a[i], i);
            current.pop_back();
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int x;
        cin >> x;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        res.clear();
        current.clear();
        solve(a, n, x, 0);

        if (res.empty()) {
            cout << -1;
        } else {
            for (const auto& partition : res) {
                cout << "[";
                for (int j = 0; j < partition.size(); j++) {
                    cout << partition[j];
                    if (j != partition.size() - 1) {
                        cout << " ";
                    }
                }
                cout << "]";
            }
        }
        cout << endl;
    }
    return 0;
}
