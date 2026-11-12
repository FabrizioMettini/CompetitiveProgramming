// #greedy #900 

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

    int l, r;
    l = 0;
    while (l < n) {
        if (a[l] != 0) {
            ans++;
            r = l;
            while (r < n && a[r] != 0) {
                r++;
            }
            l = r;
        }
        l++;
    }

    ans = min(2, ans);
    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}