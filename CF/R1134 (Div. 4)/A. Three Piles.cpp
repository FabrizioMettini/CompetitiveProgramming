#include <bits/stdc++.h>
using namespace std;

void solve() {
    vector<int> a(3);
    for (auto &ai : a) {
        cin >> ai;
    }

    sort(a.begin(), a.end());

    bool yes = false;

    if (a[0] + 1 == a[1] && a[1] == a[2] - 1) {
        yes = true;
    }

    string ans;

    if (yes) {
        ans = "YES";
    } else {
        ans = "NO";
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