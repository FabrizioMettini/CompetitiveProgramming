#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<ll> x(n);
    for (auto &xi : x) {
        cin >> xi;
    }

    ll ans = 0;

    for (int i = 1; i < n; i++) {
        if (x[i] < x[i-1]) {
            ans += x[i-1] - x[i];
            x[i] = x[i-1];
        }
    }

    cout << ans << '\n';
}