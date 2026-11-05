// #sortings #800 

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (auto &ai : a) {
        cin >> ai;
    }
    
    if (a[0] == 1) {
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