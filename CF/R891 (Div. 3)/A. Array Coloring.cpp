// #greedy #math #800 

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int c = 0;

    vector<int> a(n);
    for (auto &ai : a) {
        cin >> ai;

        if (ai % 2) {
            c++;
        }
    }

    if (c % 2 == 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}