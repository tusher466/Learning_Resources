//
// Created by eftia on 4/5/2026.
//

#include<bits/stdc++.h>
using namespace std;

int main () {
    int A, B, C;
    cin >> A >> B >> C;

    for (int i = A; i <= B; i++) {
        if (i % C == 0) {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
