// #binary_search #bitmasks #brute_force #1200

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (auto &ai : a) {
        cin >> ai;
    }
    
    int ans = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            ans = max(ans, (a[i] ^ a[j]));
        }
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