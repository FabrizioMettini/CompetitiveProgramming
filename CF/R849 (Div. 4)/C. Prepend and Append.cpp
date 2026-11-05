// #implementation #two_pointers #800 

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int i, j;
    i = 0, j = n - 1;

    while (i < j) {
        if (s[i] == s[j]) {
            break;
        }
        i++, j--;
    }

    int ans = 0;
    if (j >= i) {
        ans = j - i + 1;
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