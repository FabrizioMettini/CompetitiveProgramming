// #implementation #sortings #1200

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    vector<int> a(n);
    for (auto &ai : a) {
        cin >> ai;
    }
    
    sort(a.begin(), a.end());

    int ans = 1;
    while (ans <= n) {
        if (a[ans-1] != ans) {
            break;
        }
        ans++;
    }

    cout << ans << "\n";
} 