// #implementation #900 

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool yes = false;

    for (auto c : s) {
        if (c == 'H' || c == 'Q' || c == '9') {
            yes = true;
        }
    }

    if (yes) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}