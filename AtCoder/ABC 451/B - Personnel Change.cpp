#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> t(m, 0);
    vector<int> r(m, 0);

    while (n--) {
        int ai, bi;
        cin >> ai >> bi;
        ai--, bi--;
        t[ai]++;
        r[bi]++;
    }

    for (int i = 0; i < m; i++) {
        cout << r[i] - t[i] << "\n";
    }
}