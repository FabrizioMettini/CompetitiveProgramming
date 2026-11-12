#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int ans;
	
	if (n < 4) {
	    ans = n;
	} else {
	    ans += n-5 + 1;
	}
	
	cout << ans << "\n";
}
