// #geometry #greedy #math #800

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    int ans = -1;
    
    if (b <= d && c <= a + d - b) {
        ans = (d - b) + (a + d - b - c);
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