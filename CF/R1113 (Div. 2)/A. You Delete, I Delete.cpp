// #greedy #800

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        
        s.erase(find(s.begin(),s.end(), '0'));
        s.erase(find(s.begin(),s.end(), '1'));
        
        cout << s << '\n';
    }
}