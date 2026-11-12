#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    int odds = 0;
    
    vector<int> a(n);
    for (auto &ai : a) {
        cin >> ai;
        
        if (ai % 2 == 1) {
            odds++;
        }
    }
    
    int ans = 0;
    
    if (odds % 2 == 0) {
        ans = n;
    } else {
        int i = 0;
        while (i < n && a[i] % 2 == 0) {
            i++;
        }
        ans = max(max(i, n-i-1), ans);
        
        int j = n-1;
        while (j >= 0 && a[j] % 2 == 0) {
            j--;
        }
        ans = max(max(j, n-j-1), ans);
    }
    
    cout << ans << "\n";
}

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    solve();
	}
}
