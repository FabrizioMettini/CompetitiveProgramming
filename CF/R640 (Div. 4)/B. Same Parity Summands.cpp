// #math #constructive #1200

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
 
    int n1 = n - (k - 1);
    if (n1 > 0 && n1 % 2 == 1) {
        cout << "YES\n";
        for (int i = 0; i < k - 1; i++) cout << "1 ";
        cout << n1 << '\n';
        return;
    }
 
    int n2 = n - 2 * (k - 1);
    if (n2 > 0 && n2 % 2 == 0) {
        cout << "YES\n";
        for (int i = 0; i < k - 1; i++) cout << "2 ";
        cout << n2 << '\n';
        return;
    }
 
    cout << "NO\n";
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