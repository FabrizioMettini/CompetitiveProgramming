// #greedy #math #800 

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int p, m;
    p = m = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x > 0) {
            p++;
        } else {
            m++;
        }
    }

    int ans = 0;

    while (p < m) {
        p++, m--;
        ans++;
    }

    if (m % 2 == 1) {
        p++, m--;
        ans++;
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