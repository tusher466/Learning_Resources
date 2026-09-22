//
// Created by eftia on 12/11/2025.
//
// Problem: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P

#include <stdio.h>
int main()
{
    int X;
    scanf("%d", &X);
    int first_digit = X / 1000;
    if (first_digit % 2 == 0) {
        printf("EVEN\n");
    }
    else {
        printf("ODD\n");
    }

    return 0;
}
