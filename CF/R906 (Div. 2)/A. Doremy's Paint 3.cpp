// #constructive #800

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    map<int, int> m;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        m[x]++;
    }

    if (m.size() >= 3) {
        cout << "NO\n";
    } else {
        if (abs(m.begin()->second - m.rbegin()->second) <= 1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}