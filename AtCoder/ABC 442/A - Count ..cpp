#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int cnt = 0;
    for (auto c : s) {
        if (c == 'i' || c == 'j') {
            cnt++;
        }
    }

    cout << cnt << "\n";
}