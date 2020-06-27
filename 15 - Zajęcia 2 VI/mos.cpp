#include <bits/stdc++.h>

using namespace std;
int main(int argc, char const* argv[]) {
    int n;
    cin >> n;
    vector<int> fillars(n);
    vector<pair<int, int>> dp(n, {0, 0});

    for (int& val : fillars) {
        cin >> val;
    }

    dp[0] = {fillars[0], 1};

    for (int i = 1; i < n; i++) {
        if (dp[i - 1].second < 2) {
            dp[i] = {dp[i - 1].first, dp[i - 1].second + 1};
        } else {
            int sum1 = dp[i - 1].first;
            int sum2 = sum1 - fillars[i - 1] + fillars[i];

            if (sum2 > sum1) {
                dp[i] = {sum2, 0};
            } else {
                dp[i] = {sum1, dp[i - 1].second + 1};
            }
        }
    }

    cout << max_element(dp.begin(), dp.end())->first << endl;
    return 0;
}