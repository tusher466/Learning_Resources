#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        string s, t_word;
        cin >> s >> t_word;

        string m = "";
        for (int i = 0; i < 5; i++) {
            if (t_word[i] == s[i]) {
                m += 'G';
            } else {
                m += 'B';
            }
        }
        cout << m << endl;
    }

    return 0;
}
