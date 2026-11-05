// #greedy #math #800 

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;

    vector<int> a(n);
    for (auto &ai : a) {
        cin >> ai;
    }

    int ans = max(a[0], 2 * (x - a[n-1]));
    
    for (int i = 1; i < n; i++) {
        ans = max(ans, a[i] - a[i-1]);
    }

    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}