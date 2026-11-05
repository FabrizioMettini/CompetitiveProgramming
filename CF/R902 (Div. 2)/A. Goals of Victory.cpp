// #math #800 

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int ans = 0;

    for (int i = 0; i < n-1; i++) {
        int ai;
        cin >> ai;
        ans += ai;
    }

    ans *= -1;
    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}