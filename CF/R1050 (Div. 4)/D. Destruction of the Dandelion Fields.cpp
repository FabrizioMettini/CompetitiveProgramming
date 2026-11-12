// #constructive #greedy #sortings #1000

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;

    vector<ll> a(n);
    for (auto &ai : a) {
        cin >> ai;
    }

    vector<ll> odd, even;
    for (auto ai : a) {
        if (ai % 2 == 0) {
            even.push_back(ai);
        } else {
            odd.push_back(ai);
        }
    }

    sort(odd.begin(), odd.end(), greater<ll>());
    
    ll ans = 0LL;
    if (odd.size() != 0) {
        ans += accumulate(even.begin(), even.end(), 0LL);
        ans += accumulate(odd.begin(), odd.begin() + (odd.size()+1) / 2, 0LL);
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
