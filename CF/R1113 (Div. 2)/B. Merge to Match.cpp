#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> a(n);
        for (auto &ai : a) {
            cin >> ai;
        } 

        vector<int> b(m);
        for (auto &bi : b) {
            cin >> bi;
        } 

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        if (n < 2 * m) {
            cout << "NO\n";
            continue;
        }

        int i = 0;
        while (i < m && a[i] < b[i] && b[i] < a[n - m + i]) {
            i++;
        }

        if (i < m) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
}