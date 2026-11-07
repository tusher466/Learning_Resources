#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int odd_count = 0;
        int even_count = 0;

        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            if (num % 2 != 0) {
                odd_count++;
            } else {
                even_count++;
            }
        }

        if (odd_count == 0) {
            cout << 0 << endl;
        } else {
            int ans = 1 + even_count + (odd_count - 1) / 2;
            cout << ans << endl;
        }
    }

    return 0;
}
