// #implementation #math #1000 

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> x(n), y(n), z(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i] >> z[i];
    }

    int dx, dy, dz;
    dx = dy = dz = 0;

    for (int i = 0; i < n; i++) {
        dx += x[i];
        dy += y[i];
        dz += z[i];
    }
    
    if (dx == 0 && dy == 0 && dz == 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}