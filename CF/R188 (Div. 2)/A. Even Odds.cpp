// #math #900 

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n, k;
    cin >> n >> k;

    ll i = (n + 2 - 1) / 2;
    ll ans;

    if (i >= k) {
        ans = 2*k - 1;    
    } else {
        ans = 2 * (k - i);
    }

    cout << ans << "\n";
}