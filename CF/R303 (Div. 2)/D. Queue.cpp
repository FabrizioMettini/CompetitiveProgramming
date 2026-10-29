// #greedy #implementation #sortings #1300

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    vector<int> t(n);
    for (auto &ti : t) {
        cin >> ti;
    }

    sort(t.begin(), t.end());

    int ans = 0;
    int time = 0;

    for (int i = 0; i < n; i++) {
        if (t[i] >= time) {
            time += t[i];
            ans++;
        }
    }

    cout << ans << "\n";
}