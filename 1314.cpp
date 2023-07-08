#include<bits/stdc++.h>
using namespace std;

void partition(int N, vector<int>& current, vector<vector<int>>& result, int start) {
    if (N == 0) {
        result.push_back(current);
        return;
    }
    for (int i = start; i >= 1; i--) {
        if (N - i >= 0) {
            current.push_back(i);
            partition(N - i, current, result, i);
            current.pop_back();
        }
    }
}

int main() {
    int T;
    cin >> T;
    
    for (int i = 0; i < T; i++) {
        int N;
        cin >> N;
        
        vector<vector<int>> result;
        vector<int> current;
        
        partition(N, current, result, N);
        
        for (const auto& partition : result) {
            cout << "(";
            for (int j = 0; j < partition.size(); j++) {
                cout << partition[j];
                if (j != partition.size() - 1) {
                    cout << " ";
                }
            }
            cout << ") ";
        }
        cout << endl;
    }
    
    return 0;
}
