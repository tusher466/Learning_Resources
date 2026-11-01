#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        long long c1 = 0, c2 = 0, c3 = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x == 1) c1++;
            else if (x == 2) c2++;
            else if (x == 3) c3++;
        }
        long long ans = (c1 * (c1 - 1)) / 2 + (c1 * c2) + (c2 * c3);
        cout << ans << endl;
    }
    
    return 0;
}
