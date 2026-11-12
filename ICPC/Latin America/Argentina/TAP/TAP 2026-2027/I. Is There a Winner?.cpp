#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    string ans;

    if (n == 2 && k % 2 == 1 || k == 1) {
        ans = "S";
    } else {
        ans = "N";
    }

    cout << ans << "\n";
}