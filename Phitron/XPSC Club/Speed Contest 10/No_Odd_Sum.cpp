#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        int c1 = 0;
        int c2 = 0;
        
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            if (num == 1) {
                c1++;
            } else if (num == 2) {
                c2++;
            }
        }
        
        if (c1 == 0 || c2 == 0) {
            cout << 0 << "\n";
        } else if (c1 % 2 != 0) {
            cout << c2 << "\n";
        } else {
            int option1 = c2;
            int option2 = c1 / 2;
            if (option1 < option2) {
                cout << option1 << "\n";
            } else {
                cout << option2 << "\n";
            }
        }
    }
    
    return 0;
}
