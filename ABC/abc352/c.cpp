#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<pair<int, int> > giants(N);
    for (int i = 0; i < N; i++) {
        cin >> giants[i].first >> giants[i].second;
    }

    vector<long long> dp(N);
    for (int i = 0; i < N; i++) {
        dp[i] = giants[i].second;
        for (int j = 0; j < i; j++) {
            if (giants[j].second < giants[i].first) {
                dp[i] = max(dp[i], dp[j] + giants[i].second);
            }
        }
    }

    cout << *max_element(dp.begin(), dp.end()) << endl;

    return 0;
}