#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<bool> bucket(26, false);
    for (auto c : s) {
        bucket[c-'a'] = true;
    }

    bool none = true;
    for (int i = 0; i < 26; i++) {
        if (!bucket[i]) {
            cout << char('a'+i) << "\n";
            none = false;
            break;
        }
    }

    if (none) {
        cout << "None\n";
    }
}