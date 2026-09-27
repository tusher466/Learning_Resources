//
// Created by eftia on 1/4/2026.
//
//Phitron Module: 1

#include <bits/stdc++.h>
using namespace std;
int main() {

    int n, q;
    cin >> n >> q;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < q; i++) {
        int x;
        cin >> x;
        int flag = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == x) {
                flag = 1;
            }
        }
        if (flag == 1) {
            cout << "found" << endl;
        }
        else {
            cout << "not found" << endl;
        }
    }

    return 0;
}
