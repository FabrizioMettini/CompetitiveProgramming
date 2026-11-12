// #constructive #greedy #math #number_theory #1100

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;

    ll k = 1;

    for (int i = 0; i < n; i++) {
        cout << k * (k+2) << " ";
        k += 2;
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}