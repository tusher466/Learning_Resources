#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            string s;
            cin >> s;
            
            int safe_birds = 0;
            for (int i = 0; i < n; i++) {
                if (s[i] == '0') {
                    safe_birds++;
                } else {
                    break;
                }
            }
            
            cout << safe_birds << endl;
        }
    }
    return 0;
}
