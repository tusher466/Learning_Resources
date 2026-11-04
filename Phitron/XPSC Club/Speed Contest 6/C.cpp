#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        long long n;
        int k;
        cin >> n >> k;
        
        int remainder = n % 4;
        
        if (k == 0) {
            if (remainder == 0) {
                cout << "Off" << endl;
            } else {
                cout << "On" << endl;
            }
        } else {
            if (remainder == 0) {
                cout << "On" << endl;
            } else {
                cout << "Ambiguous" << endl;
            }
        }
    }
    
    return 0;
}
