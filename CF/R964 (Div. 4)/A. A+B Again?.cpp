// #implementation #math #800

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int a, b;
    a = n / 10;
    b = n % 10;
    cout << a + b << "\n";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}