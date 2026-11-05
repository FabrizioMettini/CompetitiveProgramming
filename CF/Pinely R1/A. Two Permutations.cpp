// #brute_force #constructive #800 

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, a, b;
    cin >> n >> a >> b;

    bool yes = true;

    if (a + b + 1 >= n && (a != n || b != n)) {
        yes = false;
    }

    if (yes) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}