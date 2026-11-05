// #brute_force #math #number_theory #800 

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (auto &ai : a) {
        cin >> ai;
    }

    bool yes = false;

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (gcd(a[i], a[j]) <= 2) {
                yes = true;
            }
        }
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