#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        vector<int> x(3);
        for (auto &xi : x) {
            cin >> xi;
        }
        sort(x.begin(), x.end());
        cout << min(x[2] - x[1], x[1] - x[0]) << '\n';
    }
}