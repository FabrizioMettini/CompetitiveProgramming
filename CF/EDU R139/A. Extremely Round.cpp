// #brute_force #implementation #800 

#include <bits/stdc++.h>
using namespace std;

int f(int n) {
    int x = n;
    int d = 0;
    int p = 0;

    while (x) {
        if (x < 10) {
            p = x;
        }
        x /= 10;
        d++;
    }

    return 9*(d-1) + p;
}

void solve() {
    int n;
    cin >> n;
    cout << f(n) << "\n";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}