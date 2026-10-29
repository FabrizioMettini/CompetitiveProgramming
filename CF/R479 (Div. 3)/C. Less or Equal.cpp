// #sortings #1200

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    
    vector<int> a(n);
    for (auto &ai: a) {
        cin >> ai;
    }

    sort(a.begin(), a.end());

    if (k == n) {
        cout << a[n-1] << '\n';
    } else if (k != 0) {
        if (a[k-1] == a[k]) {
            cout << -1 << "\n";
        } else {
            cout << a[k-1] << "\n";
        }
    } else {
        if (a[0] == 1) {
            cout << -1 << "\n";
        } else {
            cout << 1 << "\n";
        }
    }
}