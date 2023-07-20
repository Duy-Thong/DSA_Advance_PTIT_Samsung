#include <iostream>
#include <vector>
using namespace std;

vector<int> findStandingNumbers(vector<int>& nums) {
    int n = nums.size();
    vector<int> result;
    
    int max_num = nums[n - 1];
    result.push_back(max_num);

    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] > max_num) {
            max_num = nums[i];
            result.push_back(max_num);
        }
    }

    return result;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        vector<int> result = findStandingNumbers(A);

        for (int i = result.size() - 1; i >= 0; i--) {
            cout << result[i] << " ";
        }

        cout << endl;
    }

    return 0;
}
