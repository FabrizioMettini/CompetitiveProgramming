#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string t;
    t = s;

    int n = s.length();

    if (s[n-1] == 'e') {
        t += 'r';
    } else {
        t += "er";
    }

    cout << t << "\n";
}