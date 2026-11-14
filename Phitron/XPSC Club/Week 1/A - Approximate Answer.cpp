//
// Created by eftia on 4/5/2026.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, Y, K;
    cin >> X >> Y >> K;

    cout << (abs (X - Y) <= K ? "YES" : "NO") << endl;

    return 0;
}
