#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for (auto &ai : a) {
        cin >> ai;
    }

    vector<int> b(m);
    for (auto &bi : b) {
        cin >> bi;
    }
   
    vector<int> c(n+m);
    int i, j, k;
    i = j = k = 0;

    while (i < n || j < m) {
        if (j == m || i < n && a[i] < b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }

    for (int i = 0; i < n+m; i++) {
        cout << c[i] << (i == n+m-1 ? "\n": " ");        
    }
}