#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;

        vector<int> cnta(2, 0), cntb(2, 0);
        for (int i = 0; i < n; i++) {
            cnta[i % 2] += a[i] == '1';
            cntb[i % 2] += b[i] == '1';
        }

        if (cnta[0] == cntb[0] && cnta[1] == cntb[1]) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}