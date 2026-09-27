//
// Created by eftia on 1/5/2026.
//
//Phitron Module: 1
//Space Complexity

#include <bits/stdc++.h>
using namespace std;
int main() {

    int n; // O(1)
    cin >> n;
    int arr[n]; // O(N)

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
