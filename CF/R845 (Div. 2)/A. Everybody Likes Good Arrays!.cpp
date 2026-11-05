// #brute_forces #implementation #math #800

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
    for (int i = 0; i < n-1; i++) {
        if (a[i] % 2 == a[i+1] % 2) {
            ans++;
        }
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}