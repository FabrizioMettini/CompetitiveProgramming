// #brute_forces #implementation #math #800

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int c = 0;
    vector<int> a(n);

    for (auto &ai : a) {
        cin >> ai;
        if (ai == 2) {
            c++;
        }
    }

    int ans = -1;

    if (c % 2 == 0) {
        int k = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == 2) {
                k++;
            }
            if (k == c / 2) {
                ans = i + 1;
                break;
            }
        }
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