//
// Created by eftia on 1/4/2026.
//
//Phitron Module: 1
//Logarithmic Complexity O(logN)

#include <bits/stdc++.h>
using namespace std;
int main() {

    int n; // O(1)
    cin >> n; // O(1)

    for (int i = 1; i <= n; i *= 2) // O(logN)
    {
        cout << i << endl;
    }

    cout << endl; // O(1)

    for (int i = n; 1 <= i; i /= 2) // O(logN)
    {
        cout << i << endl;
    }

    return 0; // O(1)
}
