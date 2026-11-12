#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 0;
    int c = 0;

    for (int i = 0; i < n; i++) {
        int r;
        cin >> r;

        if (r == 1) {
            ans++;
            c++;

            if (c >= 3) {
                ans++;
            }
        } else {
            ans--;
            c = 0;
        }
    }

    cout << ans << "\n";
}