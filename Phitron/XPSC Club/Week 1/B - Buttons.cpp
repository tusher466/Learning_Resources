//
// Created by eftia on 4/5/2026.
//

#include <bits/stdc++.h>
using namespace  std;

int main() {
    int A, B;
    cin >> A >> B;
    int coin = 0;

    if (A > B) {
        coin = A + (A - 1);
    }
    else if (B > A) {
        coin = B + (B - 1);
    }
    else if (A == B) {
        coin = A + B;
    }

    cout << coin << endl;

    return 0;
}
