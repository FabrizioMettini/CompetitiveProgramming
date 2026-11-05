// #constructive #math #800 

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (auto &ai : a) {
        cin >> ai;
    }
    
    if (a[0] == a[n-1]) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
        cout << a[n-1] << " ";
        for (int i = 0; i < n-1; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}