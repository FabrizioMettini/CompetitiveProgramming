// #implementation #900 

#include <bits/stdc++.h>
using namespace std;

void solve() {
    vector<string> grid(8);
    bool red = false;

    for (int i = 0; i < 8; i++) {
        cin >> grid[i];

        if (grid[i] == "RRRRRRRR") {
            red = true;
        }
    }

    string ans;

    if (red) {
        ans = "R";
    } else {
        ans = "B";
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