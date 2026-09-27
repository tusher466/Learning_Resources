//
// Created by eftia on 1/4/2026.
//
//Phitron Module: 1
//Linearithmic Complexity O(NlogN)

#include <bits/stdc++.h>
using namespace std;
int main() {

    int n; // O(1)
    cin >> n; // O(1)

    for (int i = 1; i < n; i++) // O(N)
    {
        for (int j = 1; j < n; j *= 2) // O(logN)
        {
            cout << "Hello" << endl;
        }
    }

    return 0; // O(1)
}
