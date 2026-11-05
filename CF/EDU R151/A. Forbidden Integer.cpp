// #constructive #implementation #math number_theory #800 

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k, x;
    cin >> n >> k >> x;

    if (x > 1) {
        cout << "YES\n";
        cout << n << "\n";
        for (int i = 0; i < n; i++) {
            cout << 1 << " ";
        }
        cout << "\n";
    } else {
        if (k == 1 || k == 2 && n % 2 == 1) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
            cout << n/2 << "\n";
            if (n % 2 == 1) {
                cout << 3 << " ";
                n -= 3;
            }
            while (n > 0) {
                cout << 2 << " ";
                n -= 2;
            }
            cout << "\n";
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