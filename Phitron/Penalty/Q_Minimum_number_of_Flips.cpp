//
// Created by eftia on 3/7/2026.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int count1 = 0;
        int count_neg1 = 0;

        for (int i = 0; i < n; i++) {
            int val;
            cin >> val;
            if (val == 1) {
                count1++;
            } else {
                count_neg1++;
            }
        }

        if (n % 2 != 0) {
            cout << -1 << endl;
        }
        else {
            int target = n / 2;
            int ans;

            if (count1 > target) {
                ans = count1 - target;
            }

            else {
                ans = target - count1;
            }

            cout << ans << endl;
        }
    }
    return 0;
}
