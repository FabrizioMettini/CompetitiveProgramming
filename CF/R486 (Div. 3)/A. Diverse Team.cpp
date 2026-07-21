// #brute force #implementation #800

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    
    vector<int> a(n);
    set<int> s;
    vector<int> v;

    for (int i = 0; i < n; i++) {
        cin >> a[i];

        if (s.count(a[i]) == 0) {
            s.insert(a[i]);
            v.push_back(i+1);
        }
    }

    if (v.size() < k) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
        for (int i = 0; i < k; i++) {
            cout << v[i] << ' ';
        }
        cout << '\n';
    }   
}