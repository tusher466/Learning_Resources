#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while (t--) {
        int n, x;
        cin >> n >> x;
        string s;
        cin >> s;
        
        int current_swipes = 0;
        bool possible = true;
        
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                current_swipes = x;
            } else {
                current_swipes--;
            }
            
            if (current_swipes < 0) {
                possible = false;
                break;
            }
        }
        
        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
