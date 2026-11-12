// #constructive #greedy #math #800 

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> p(3*n);
    for (int i = 0; i < 3*n; i++) {
        p[i] = i+1;
    }
    
    int i, j, k; 
    i = 0;
    j = 3*n - 1;
    k = 0;

    while (i <= j) {
        if (k % 3 == 0) {
            cout << p[i] << " ";
            i++;
        } else {
            cout << p[j] << " ";
            j--;
        }
        k++;
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