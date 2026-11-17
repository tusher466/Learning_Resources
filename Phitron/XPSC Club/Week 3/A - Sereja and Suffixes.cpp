//
// Created by eftia on 4/15/2026.
//

#include<bits/stdc++.h>
using namespace std;

int main() {


    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string b;
        cin >> b;

        set<char> distinct;
        for (char c : b) {
            distinct.insert(c);
        }

        string r = "";
        for (char c : distinct) {
            r += c;
        }

        map<char, char> m;
        int len = r.length();
        for (int i = 0; i < len; i++) {
            m[r[i]] = r[len - 1 - i];
        }

        string s = "";
        for (int i = 0; i < n; i++) {
            s += m[b[i]];
        }
        cout << s << "\n";
    }
    return 0;
}
