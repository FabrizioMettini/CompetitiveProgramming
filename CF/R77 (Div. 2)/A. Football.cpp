// #implementation #strings #900 

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    char prev = '2';
    int curr = 1;
    bool ok = false;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == prev) {
            curr++;
        } else {
            curr = 1;
        } 

        if (curr >= 7) {
            ok = true;
        }

        prev = s[i];
    }

    if (ok) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}