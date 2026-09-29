//
// Created by eftia on 1/5/2026.
//
//Phitron Module: 2

#include <bits/stdc++.h>
using namespace std;
int main() {

    int n;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    // for (int i = 0; i < n; i++) {
    //     cin >> v[i];
    // }

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    return 0;
}
