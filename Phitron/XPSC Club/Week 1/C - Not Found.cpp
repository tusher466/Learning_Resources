//
// Created by eftia on 4/5/2026.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (char c = 'a'; c <= 'z'; ++c) {
        bool found = false;
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == c) {
                found = true;
                break;
            }
        }

        if (!found) {
            cout << c << endl;
            return 0;
        }
    }

    cout << "None" << endl;
    return 0;
}

