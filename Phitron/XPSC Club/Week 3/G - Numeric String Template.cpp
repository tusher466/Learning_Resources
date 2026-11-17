//
// Created by eftia on 4/21/2026.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int m;
        cin >> m;

        for (int j = 0; j < m; j++) {
            string s;
            cin >> s;

            if (s.length() != n) {
                cout << "NO" << endl;
                continue;
            }

            map<int, char> numToChar;
            map<char, int> charToNum;
            bool possible = true;

            for (int i = 0; i < n; i++) {
                int num = a[i];
                char ch = s[i];

                if (numToChar.count(num)) {
                    if (numToChar[num] != ch) {
                        possible = false;
                        break;
                    }
                } else {
                    numToChar[num] = ch;
                }

                if (charToNum.count(ch)) {
                    if (charToNum[ch] != num) {
                        possible = false;
                        break;
                    }
                } else {
                    charToNum[ch] = num;
                }
            }

            if (possible) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
