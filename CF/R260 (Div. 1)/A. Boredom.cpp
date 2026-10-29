// #dp #1500

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    vector<long long> a(n);
    vector<long long> count(1e5+1, 0);

    for (auto &ai : a) {
        cin >> ai;
        count[ai]++;
    }
    
    vector<long long> dp(1e5+1, -1);
    dp[0] = 0;
    dp[1] = count[1] * 1;

    for (int i = 2; i <= 1e5; i++) {       
        dp[i] = max(dp[i-1], dp[i-2] + count[i] * i);
    }

    cout << dp[1e5] << "\n";
}