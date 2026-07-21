// #brute force #implementation #800

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    set<char> p{'a','e','i','o','u','1','3','5','7','9'};

    int ans = 0;
    for (auto &c : s) {
        if (p.count(c)) {
            ans++;
        }
    }

    cout << ans << '\n';
}