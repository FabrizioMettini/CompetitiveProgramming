#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    set<int> s;

    for (int i = 0; i < n; i++) {
        int di;
        cin >> di;
        s.insert(di);    
    }

    cout << s.size() << "\n";
}