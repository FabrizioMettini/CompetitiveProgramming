// #constructive #greedy #math #900 

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (auto &ai : a) {
        cin >> ai;
        ai++;
    }

    for (int i = 0; i < n-1; i++) {
        if (a[i+1] % a[i] == 0) {
            a[i+1]++;
        }
    }

    for (auto ai : a) {
        cout << ai << " ";
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
