//
// Created by eftia on 12/11/2025.
//
// Problem: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E

#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int mx = 0;
    for (int i = 1; i <= n; i++) {
        int val;
        scanf("%d", &val);
        if (val > mx) {
            mx = val;
        }
    }
    printf("%d\n", mx);

    return 0;
}
