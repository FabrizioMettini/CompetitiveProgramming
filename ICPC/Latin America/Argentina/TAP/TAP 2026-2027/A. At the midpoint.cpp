#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, m, s;
    cin >> h >> m >> s;

    s += m * 60 + h * 3600;
    string ans;

    if (s == 9000) {
        ans = "=";
    } else if (s < 9000) {
        ans = "-";
    } else {
        ans = "+";
    }

    cout << ans << "\n";
}