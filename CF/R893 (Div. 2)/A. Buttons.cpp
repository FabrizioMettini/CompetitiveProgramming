// #games #greedy #math #800

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;

    a += (c+1)/2;
    b += c/2;

    if (a > b) {
        cout << "First\n";
    } else {
        cout << "Second\n";
    }
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
}