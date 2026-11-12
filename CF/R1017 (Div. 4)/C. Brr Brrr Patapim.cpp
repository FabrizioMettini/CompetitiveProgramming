// #math #900 

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<vector<int>> g(n, vector<int>(n));
    set<int> b;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> g[i][j];
            b.insert(g[i][j]);
        }
    }

    int first = 1;
    while (first <= 2*n) {
        if (b.count(first) == 0) {
            break;
        }
        first++;
    }

    vector<int> p(2*n);
    p[0] = first;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            p[i+j+1] = g[i][j];
        }
    }

    for (auto pi : p) {
        cout << pi << " ";
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