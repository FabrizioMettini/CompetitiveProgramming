// #brute_force #implementation #math #1200

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;

    int odd = 0;
    int even = 0; 

    vector<int> a(n);
    for (auto &ai : a) {
        cin >> ai;

        if (ai % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    
    bool ok = false;

    for (int i = 1; i <= odd && i <= x; i += 2) {
        if (x - i <= even) {
            ok = true;
        }
    }  

    if (ok) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
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