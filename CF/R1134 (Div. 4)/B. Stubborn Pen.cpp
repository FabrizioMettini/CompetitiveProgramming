#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s; 
    cin >> s;

    bool red = true; 
    int ans = 0;
    
    for (int i = 0; i < n; i++) {
        if ((red && s[i] != 'R') || (!red && s[i] != 'B')) {
            red = !red;
            ans++;
        }

        red = !red;
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