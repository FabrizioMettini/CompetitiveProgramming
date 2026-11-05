// #constructive  #math #number_theory #800 

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int m, c;
    m = c = 0;

    vector<int> a(n);
    for (auto &ai : a) {
        cin >> ai;
        
        if (ai > m) {
            m = ai;
            c = 1;
        } else if (ai == m) {
            c++;
        }
    }

    if (c == n) {
        cout << -1 << "\n";
    } else {
        cout << n - c << " " << c << "\n";
        for (auto ai : a) {
            if (ai != m) {
                cout << ai << " ";
            }
        }
        cout << "\n";
        for (auto ai : a) {
            if (ai == m) {
                cout << m << " ";
            }
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