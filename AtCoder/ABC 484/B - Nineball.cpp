#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    cin >> k;

    vector<int> a(k);
    for (auto &ai : a) {
        cin >> ai;
    }

    sort(a.begin(), a.end());

    if (a[k-1] != 9) {
        cout << "-1\n";
    } else {
        cout << a[0] << "\n";
    }
}