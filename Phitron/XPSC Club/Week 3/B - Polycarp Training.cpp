//
// Created by eftia on 4/21/2026.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int current_day = 1;
    for (int i = 0; i < n; i++) {
        if (a[i] >= current_day) {
            current_day++;
        }
    }

    cout << current_day - 1 << endl;

    return 0;
}
