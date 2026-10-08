//
// Created by eftia on 1/21/2026.
//
//Problem: https://codeforces.com/problemset/problem/2104/A

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int total = a + b + c;

        if (total % 3 == 0 && b <= total / 3)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
