//
// Created by eftia on 3/7/2026.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int A, B;
        cin >> A >> B;

        if (A < B) {
            while (A < B) {
                A = A * 2;
            }
        }

        else if (B < A) {
            while (B < A) {
                B = B * 2;
            }
        }

        if (A == B) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
