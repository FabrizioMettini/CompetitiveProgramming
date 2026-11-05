// #math #800

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 1e5;

    for (int i = 0; i < n; i++) {
        int ai;
        cin >> ai;
        ans = min(ans, abs(ai));
    }

    cout << ans << "\n";
}