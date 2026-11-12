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
   
    vector<int> res(m);
    int i = 0;

    for (int j = 0; j < m; j++) {
        while (i < n && a[i] < b[j]) {
            i++;
        }
        res[j] = i;
    }
    
    for (int i = 0; i < m; i++) {
        cout << res[i] << (i == m-1 ? "\n": " ");        
    }
}