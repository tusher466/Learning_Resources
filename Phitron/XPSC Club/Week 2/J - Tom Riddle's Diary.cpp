//
// Created by eftia on 4/13/2026.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    set<string> seen;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        if (seen.count(s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
            seen.insert(s);
        }
    }

    return 0;
}
