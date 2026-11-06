// #implementation #strings #1000 

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool change = true;

    for (int i = 1; i < s.length(); i++) {
        if (islower(s[i])) {
            change = false;
        }
    }

    if (change) {
        for (int i = 1; i < s.length(); i++) {
            s[i] = tolower(s[i]);
        }

        if (islower(s[0])) {
            s[0] = toupper(s[0]);
        } else {
            s[0] = tolower(s[0]);
        }
    } 

    cout << s << "\n";    
}