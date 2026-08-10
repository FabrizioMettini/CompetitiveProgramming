#include <bits/stdc++.h>
using namespace std;

bool is_prime(int x) {
    for (int i = 2; i*i <= x; i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        
        if (is_prime(n+1)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}