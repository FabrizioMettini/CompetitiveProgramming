#include <bits/stdc++.h>
using namespace std;

bool cond(vector<set<int>> &pos, char c, int n) {
    for (auto idx : pos[c-'a']) {
        if (pos[c-'a'].count(n-idx-1) == 0) {
            return false;
        }
    }
    return true;
} 

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<set<int>> pos(26);
    for (int i = 0; i < n; i++) {
        pos[s[i]-'a'].insert(i);
    }

    int ans = 0;

    for (char c = 'z' ; c >= 'b'; c--) {
        if (pos[c-'a'].empty() || cond(pos, c, n)) {
            continue;
        } else {
            for (auto idx : pos[c-'a']) {
                pos[c-1-'a'].insert(idx);
            }
            ans++;
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