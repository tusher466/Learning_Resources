//
// Created by eftia on 4/7/2026.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    int a[101] = {0};
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        a[val] = 1;
    }

    int ans = 0;
    for (int i = 0; i < x; i++) {
        if (a[i] == 0) {
            ans++;
        }
    }

    if (a[x] == 1) {
        ans++;
    }

    cout << ans << endl;

    return 0;
}
