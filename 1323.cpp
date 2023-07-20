#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool is_cubic(long long num) {
    long long cube_root = round(cbrt(num));
    return cube_root * cube_root * cube_root == num;
}

long long find_largest_cubic(long long N) {
    string s = to_string(N);
    int l = s.length();
    long long result = -1;

    for (int i = 0; i < (1 << l); ++i) {
        string binary_str = "";
        int temp = i;
        for (int j = 0; j < l; ++j) {
            binary_str += (temp & 1) ? '1' : '0';
            temp >>= 1;
        }

        string selected_digits = "";
        for (int j = 0; j < l; ++j) {
            if (binary_str[j] == '1') {
                selected_digits += s[j];
            }
        }

        if (!selected_digits.empty()) {
            long long num = stoll(selected_digits);
            if (is_cubic(num) && num > result) {
                result = num;
            }
        }
    }

    return result;
}

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; ++i) {
        long long N;
        cin >> N;
        long long largest_cubic = find_largest_cubic(N);
        cout << largest_cubic << endl;
    }

    return 0;
}
