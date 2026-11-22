#include <bits/stdc++.h>
using namespace std;

int main() {
    bool bucket[10] = { false };
    
    string s;
    cin >> s;

    for (auto c : s) {
        bucket[c-'0'] = true;
    }

    for (int i = 0; i < 10; i++) {
        if (!bucket[i]) {
            cout << i << "\n";
        }
    }    
}