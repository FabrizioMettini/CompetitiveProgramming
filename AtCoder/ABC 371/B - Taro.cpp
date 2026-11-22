#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<bool> f(n, false);

    while (m--) {
        int ai;
        char bi;
        cin >> ai >> bi;
        ai--;

        if (bi == 'F') {
            cout << "No\n";
        } else {
            if (!f[ai]) {
                cout << "Yes\n";
                f[ai] = true;
            } else {
                cout << "No\n";
            }
        }
    }
}