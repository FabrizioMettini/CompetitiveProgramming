// #brute_force #strings #800

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    string x, s;
    cin >> x >> s;

    bool sub = false;
    int ans = 0;

    while (ans <= 5) {
        if (x.find(s) == string::npos) {
            ans++;
            x += x;
        } else {
            sub = true;
            break;
        }
    }

    if (sub) {
        cout << ans << "\n";
    } else {
        cout << -1 << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
}