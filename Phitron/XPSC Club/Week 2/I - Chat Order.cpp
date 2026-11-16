//
// Created by eftia on 4/17/2026.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> names(n);
    for (int i = 0; i < n; i++) {
        cin >> names[i];
    }

    set<string> seen;
    for (int i = n - 1; i >= 0; i--) {
        if (seen.find(names[i]) == seen.end()) {
            cout << names[i] << endl;
            seen.insert(names[i]);
        }
    }

    return 0;
}
