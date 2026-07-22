#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    ll ans = n * (n+1) / 2;

    for (int i = 0; i < n-1; i++) {
        ll x;
        cin >> x;
        ans -= x;
    }
    
    cout << ans << '\n';
}