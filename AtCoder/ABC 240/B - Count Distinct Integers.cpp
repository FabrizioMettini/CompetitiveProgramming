#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    set<int> s;

    for (int i = 0; i < n; i++) {
        int ai;
        cin >> ai;
        s.insert(ai);
    }

    cout << s.size() << "\n";
}