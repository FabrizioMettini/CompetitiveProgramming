#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> y(n, 0);
    vector<int> r(n, 0);

    while (q--) {
        int c, x;
        cin >> c >> x;
        x--;

        if (c == 1) {
            y[x]++;
        } else if (c == 2) {
            r[x]++;
        } else {
            if (y[x] >= 2 || r[x] >= 1) {
                cout << "Yes\n";
            } else {
                cout << "No\n";
            }
        }
    }
}