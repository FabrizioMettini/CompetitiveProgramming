#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (auto &ai : a) {
        cin >> ai;
    }

    int ans = 1e9;
    for (auto ai : a) {
        int c = 0;
        while (ai % 2 == 0) {
            ai /= 2;
            c++;
        }
        ans = min(ans, c);
    }

    cout << ans << "\n";
}