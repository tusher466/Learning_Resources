#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        if (n == 1) {
            cout << 200 << endl;
        } else {
            cout << 100 * n << endl;
        }
    }
    return 0;
}
