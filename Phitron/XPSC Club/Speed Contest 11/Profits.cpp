#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while (t--) {
        long long n, x;
        cin >> n >> x;
        
        if (n <= x) {
            cout << 0 << "\n";
        } else {
            long long m = n - x;
            long long profit = (m * (m + 1)) / 2;
            cout << profit << endl;
        }
    }
    
    return 0;
}
