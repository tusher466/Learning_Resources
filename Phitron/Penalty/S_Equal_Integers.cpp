//
// Created by eftia on 3/7/2026.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long X, Y;
        cin >> X >> Y;

        if (X == Y) {
            cout << 0 << endl;
        }
        else if (X > Y) {

            long long diff = X - Y;
            if (diff % 2 == 0) {

                cout << diff / 2 << endl;
            } else {

                cout << 1 + (diff + 1) / 2 << endl;
            }
        }
        else {

            cout << Y - X << endl;
        }
    }
    return 0;
}

