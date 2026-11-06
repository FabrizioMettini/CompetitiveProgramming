// #greedy #sortings #900 

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (auto &ai : a) {
        cin >> ai;
    }

    sort(a.begin(), a.end(), greater<int>());
    
    int t = accumulate(a.begin(), a.end(), 0);
    int s = 0;
    int ans = 0;

    for (int i = 0; i < n; i++) {
        ans++;
        s += a[i];
        t -= a[i];

        if (s > t) {
            break;
        }
    }
    
    cout << ans << "\n";
}