#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;

int main() {
    ull ans = 0LL;

    for (int i = 0; i < 64; i++) {
        ull ai;
        cin >> ai;
        ans += (ai << i);
    }

    cout << ans << "\n";
}
