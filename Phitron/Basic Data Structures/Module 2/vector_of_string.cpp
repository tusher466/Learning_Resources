//
// Created by eftia on 1/5/2026.
//
//Phitron Module: 2

#include <bits/stdc++.h>
using namespace std;
int main() {

    int n;
    cin >> n;
    cin.ignore();
    vector<string> v(n);

    for (int i = 0; i < n; i++) {
        getline(cin, v[i]);
    }

    for (string s : v) {
        cout << s << endl;
    }

    return 0;
}
