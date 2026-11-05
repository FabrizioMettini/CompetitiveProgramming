// #brute_force #greedy #math #800 

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (auto &ai : a) {
        cin >> ai;
    }

    int m = 1e9;
    for (int i = 0; i < n-1; i++) {
        m = min(m, a[i+1] - a[i]);
    }
    
    int ans = 0;
    if (m >= 0) {
        ans = m/2 + 1;
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