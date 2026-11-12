// #greedy #math #800

#include <bits/stdc++.h>
using namespace std;

void solve() {
    vector<int> a(7);
    for (auto &ai : a) {
        cin >> ai;
    }

    sort(a.begin(), a.end());
    int ans = a[6];

    for (int i = 0; i < 6; i++) {
        ans -= a[i];
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