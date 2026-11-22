#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<bool> bucket(n, true);

    while (q--) {
        int ti;
        cin >> ti;
        ti--;
        bucket[ti] = !bucket[ti];
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (bucket[i]) {
            ans++;
        }
    }

    cout << ans << "\n";
}