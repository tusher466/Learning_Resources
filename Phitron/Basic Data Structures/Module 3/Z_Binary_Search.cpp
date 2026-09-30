//
// Created by eftia on 1/7/2026.
//
//Phitron Module: 3
//Problem: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Z

#include <bits/stdc++.h>
using namespace std;
int main() {

    int n,q;
    cin >> n >> q;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort (arr,arr+n);

    for (int i = 0; i < q; i++)
    {
        int val;
        cin >> val;
        int flag = 0;
        int l = 0;
        int r = n-1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (arr[mid] == val)
            {
                flag = 1;
                break;
            }
            else if (arr[mid] > val) {
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
    }

    return 0;
}
