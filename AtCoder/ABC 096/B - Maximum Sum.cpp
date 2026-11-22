#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, k;
    cin >> a >> b >> c >> k;

    int n = max({ a, b, c });

    int ans = 0;
    if (n == a) {
        ans = (a << k) + b+c;
    } else if (n == b) {
        ans = (b << k) + a+c;
    } else {
        ans = (c << k) + a+b;
    }

    cout << ans << "\n";
}