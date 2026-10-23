//
// Created by eftia on 2/26/2026.
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N;
    cin >> N;

    int max_balls = 0;
    for (int i = 0; i < N; i++) {
        int balls;
        cin >> balls;
        if (balls > max_balls) {
            max_balls = balls;
        }
    }

    cout << max_balls << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
