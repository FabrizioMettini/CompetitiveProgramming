#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    string ans;

    if (a + b <= c || a + c <= b || b + c <= a) {
        ans = "S";
    } else {
        ans = "N";
    }

    cout << ans << "\n";
}