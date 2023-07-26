#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Line {
    int start, end;
};

bool cmp(Line a, Line b) {
    return a.end < b.end;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<Line> lines(n);
        for (int i = 0; i < n; i++) {
            cin >> lines[i].start >> lines[i].end;
        }
        sort(lines.begin(), lines.end(), cmp);

        int selectedLines = 0;
        int prevEnd = -1;
        for (int i = 0; i < n; i++) {
            if (lines[i].start >= prevEnd) {
                selectedLines++;
                prevEnd = lines[i].end;
            }
        }

        cout << selectedLines << endl;
    }

    return 0;
}
