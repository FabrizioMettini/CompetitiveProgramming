// #constructive #greedy #implementation #strings #800

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int ans = 0;
    char fl, sl;
    fl = sl = '#';

    for (auto c : s) {
        if (c == '.') {
            if (sl == '.' && fl == '.') {
                ans = 2;
                break;
            } else {
                ans++;
            }
        }

        sl = fl;
        fl = c;
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