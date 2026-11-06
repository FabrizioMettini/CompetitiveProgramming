// #greedy #sortings #1000 

#include <bits/stdc++.h>
using namespace std;

int main() {
    int s, n;
    cin >> s >> n;

    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }
    
    sort(v.begin(), v.end(), [](auto &a, auto &b) {
        return a.first < b.first || a.first == b.first && a.second > b.second;
    });

    bool ok = true;
    
    for (int i = 0; i < n; i++) {
        if (s <= v[i].first) {
            ok = false;
            break;
        } else {
            s += v[i].second;
        }
    }

    if (ok) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    
}