//
// Created by eftia on 3/7/2026.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        for (int i = 0; i < n - 1; i += 2) {
            char temp = s[i];
            s[i] = s[i + 1];
            s[i + 1] = temp;
        }


        for (int i = 0; i < n; i++) {
            s[i] = 'z' - (s[i] - 'a');
        }

        cout << s << endl;
    }

    return 0;
}
