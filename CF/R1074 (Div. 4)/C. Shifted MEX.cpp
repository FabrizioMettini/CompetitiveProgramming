// #implementation #sortings #900

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (auto &ai : a) {
        cin >> ai;
    }
    
    sort(a.begin(), a.end());

    int curr = 1;
    int ans = 1;

    for (int i = 1; i < n; i++) {
        if (a[i] == a[i-1] + 1) {
            curr++;
        } else if (a[i] == a[i-1]) {
            continue;  
        } else {
            curr = 1;
        }
        ans = max(ans, curr);
    }
    
    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}