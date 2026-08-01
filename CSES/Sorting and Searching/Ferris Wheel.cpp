#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;

    vector<int> p(n);
    for (auto &pi : p) {
        cin >> pi;
    }

    sort(p.begin(), p.end());

    int i, j, ans;
    i = 0;
    j = n-1;
    ans = 0;

    while (i <= j) {
        if (p[j] + p[i] <= x) {
            i++;
        }

        ans++;
        j--;
    }

    cout << ans << '\n';
}