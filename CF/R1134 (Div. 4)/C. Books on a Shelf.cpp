#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (auto &ai : a) {
        cin >> ai;
    }

    sort(a.begin(), a.end());
    vector<int> b(n);

    int i;
    i = 0;
    while (i < n) {
        if (i % 2 == 0) {
            b[i/2] = a[i]; 
        } else {
            b[n-1-i/2] = a[i];
        }
        i++;
    }

    int ans, left, right, last;
    ans = 2;
    left = 0;
    right = 0;
    last = n-1;

    for (int i = 1; i < n; i++) {
        if (b[i] > b[i-1]) {
            left++;
            last = i;
        }
        if (b[i] < b[i-1]) {
            break;
        }

    }

    for (int i = n-2; i > last; i--) {
        if (b[i] > b[i+1]) {
            right++;
        }
        if (b[i] < b[i+1]) {
            break;
        }
    }
    

    ans += left;
    ans += right;
    cout << min(ans, n) << "\n";

    for (auto bi : b) {
        cout << bi << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}