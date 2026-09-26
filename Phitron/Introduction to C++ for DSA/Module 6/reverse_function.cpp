//
// Created by eftia on 11/30/2025.
//
//Phitron Module: 6

#include <bits/stdc++.h>
using namespace std;
int main() {

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    // for (int i = n-1; i >= 0; i--) {
    //     cout << a[i] << " ";
    // }
    reverse(a,a+n);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
