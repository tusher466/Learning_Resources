//
// Created by eftia on 11/20/2025.
//
//Phitron Module: 3

#include <bits/stdc++.h>
using namespace std;
int main() {

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort (a, a+n);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
