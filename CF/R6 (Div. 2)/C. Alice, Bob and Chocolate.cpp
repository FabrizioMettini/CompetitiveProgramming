// #greedy #two_pointers #1200 

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> t(n);
    for (auto &ti : t) {
        cin >> ti;
    }

    int ab, bb, at, bt;
    ab = bb = at = bt = 0;

    int i, j;
    i = 0, j = n-1;

    while (i <= j) {
        if (at <= bt) {
            at += t[i];
            ab++, i++;

        } else {
            bt += t[j];
            bb++, j--;
        }
    }

    cout << ab << " " << bb << "\n";
}