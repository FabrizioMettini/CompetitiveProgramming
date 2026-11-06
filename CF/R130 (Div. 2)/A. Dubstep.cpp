// #strings #900 

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();

    string t;
    
    int i = 0;
    while (s[i] == 'W' && i+1 < n && s[i+1] == 'U' && i+2 < n && s[i+2] == 'B') {
        i += 3;
    }
    while (i < n) {
        if (s[i] == 'W' && i+1 < n && s[i+1] == 'U' && i+2 < n && s[i+2] == 'B') {
            if (i+3 < n && s[i+3] == 'W' && i+4 < n && s[i+4] == 'U' && i+5 < n && s[i+5] == 'B') {
                i += 3;
            } else {
                t += " ";
                i += 3;
            }
        } else {
            t += s[i];
            i++;
        }
    }
      
    cout << t << "\n";
}