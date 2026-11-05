// #constructive #800 

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (auto &ai : a) {
        cin >> ai;
    }

    for (auto ai: a) {
        cout << (n+1) - ai << " ";
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