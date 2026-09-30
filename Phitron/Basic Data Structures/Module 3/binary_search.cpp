//
// Created by eftia on 1/6/2026.
//
//Phitron Module: 3


#include <bits/stdc++.h>
using namespace std;
int main() {

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int x;
    cin >> x;
    int flag = 0;

    int l = 0, r = n - 1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (arr[mid] == x) {
            flag = 1;
            break;
        }
        else if (arr[mid] > x) {
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }

    if (flag == 1) {
        cout << "found" << endl;
    }
    else {
        cout << "not found" << endl;
    }

    return 0;
}
