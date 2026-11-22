#include <bits/stdc++.h>
using namespace std;

const int A_MAX = 2000 + 1;

int main() {
    bool bucket[A_MAX] = { false };
    
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int ai;
        cin >> ai;
        bucket[ai] = true;
    }

    for (int i = 0; i < A_MAX; i++) {
        if (!bucket[i]) {
            cout << i << "\n";
            break;
        }
    }    
}