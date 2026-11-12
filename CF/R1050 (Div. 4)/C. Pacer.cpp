// #greedy #math #900

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }

    int s = 0;
    int ans = 0;
    
    for (int i = 0; i < n; i++) {
        int diff = (i == 0 ? a[0] : (a[i] - a[i-1]));

        if (s != b[i]) {
            s = b[i];
            ans++;
            diff--;
        }
                
        ans += 2 * (diff / 2);
    }

    ans += m - a[n-1];
    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}
