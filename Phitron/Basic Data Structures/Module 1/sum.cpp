//
// Created by eftia on 1/4/2026.
//
//Phitron Module: 1

#include <bits/stdc++.h>
using namespace std;
int main() {

    int n;
    cin >> n;
    int sum = 0;

    //using formula
    sum = n * (n + 1) / 2;

    //using loop
    // for (int i = 1; i <= n; i++) {
    //     sum += i;
    // }
    cout << sum;

    return 0;
}
