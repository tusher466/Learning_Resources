//
// Created by eftia on 4/5/2026.
//

#include<bits/stdc++.h>
using namespace std;

int main () {
    string s, t;
    cin >> s >> t;

    int cnt = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != t[i]) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
