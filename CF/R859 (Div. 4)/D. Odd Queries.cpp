// #data_structures #implementation #900 

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool query(vector<ll> &p, ll n, ll l, ll r, ll k) {
   ll s1, s2, s3; 
   s1 = p[l - 1];
   s2 = k * (r - l + 1);
   s3 = p[n] - p[r];
   return (s1 + s2 + s3) % 2 == 1; 
}

void solve() {
    ll n, q;
    cin >> n >> q;

    vector<ll> a(n);
    for (auto &ai : a) {
        cin >> ai;
    }

    vector<ll> p(n+1);
    p[0] = 0;
    for (ll i = 1; i <= n; i++) {
        p[i] = p[i-1] + a[i-1];
    }
    
    while (q--) {
        ll l, r, k;
        cin >> l >> r >> k;

        if (query(p, n, l, r, k)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}