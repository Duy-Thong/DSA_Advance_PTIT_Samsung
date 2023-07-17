#include <iostream>
#include <vector>
#include <algorithm>

int maximizeActions(int N, std::vector<int>& Si, std::vector<int>& Fi) {
    std::vector<std::pair<int, int>> actions;
    
    for (int i = 0; i < N; i++) {
        actions.push_back(std::make_pair(Si[i], Fi[i]));
    }
    
    std::sort(actions.begin(), actions.end(), [](const std::pair<int, int>& a, const std::pair<int, int>& b) {
        if (a.second == b.second) {
            return a.first < b.first;
        }
        return a.second < b.second;
    });
    
    int count = 1;
    int prev_end = actions[0].second;
    
    for (int i = 1; i < N; i++) {
        if (actions[i].first >= prev_end) {
            count++;
            prev_end = actions[i].second;
        }
    }
    
    return count;
}

int main() {
    int T;
    std::cin >> T;
    
    std::vector<int> results;
    
    for (int t = 0; t < T; t++) {
        int N;
        std::cin >> N;
        
        std::vector<int> Si(N);
        std::vector<int> Fi(N);
        
        for (int i = 0; i < N; i++) {
            std::cin >> Si[i];
        }
        
        for (int i = 0; i < N; i++) {
            std::cin >> Fi[i];
        }
        
        int result = maximizeActions(N, Si, Fi);
        results.push_back(result);
    }
    
    for (int i = 0; i < T; i++) {
        std::cout << results[i] << std::endl;
    }
    
    return 0;
}
