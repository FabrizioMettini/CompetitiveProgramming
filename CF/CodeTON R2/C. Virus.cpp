// #greedy #implementation #sortings #1200

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> a(m);
    for (auto &ai : a) {
        cin >> ai;
    }

    sort(a.begin(), a.end());

    vector<int> b(m);
    for (int i = 0; i < m-1; i++) {
        b[i] = (a[i+1] - 1) - a[i];
    }
    b[m-1] = (a[0] - 1) + (n - a[m-1]);

    sort(b.begin(), b.end(), greater<int>());

    int s = 0;
    int r = 0;

    for (auto bi : b) {
        int rem = bi - 2 * (2*r);

        if (rem <= 0) { 
            break; 
        }

        if (rem <= 2) {
            s +=1;
            r +=1;
            break;
        } else {
            s += (rem - 1);
            r += 1;
        }
    }

    cout << n - s << "\n";
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