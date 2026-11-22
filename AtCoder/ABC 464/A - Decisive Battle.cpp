#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int east = 0;
    int west = 0;

    for (auto c : s) {
        if (c == 'E') {
            east++;
        } else {
            west++;
        }
    }

    if (east > west) {
        cout << "East\n";
    } else {
        cout << "West\n";
    }
}