//
// Created by eftia on 12/11/2025.
//
// Problem: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N

#include<stdio.h>
int main()
{

    char ch;
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z') {
        ch = ch - 32;
        printf("%c", ch);
    }
    else {
        ch = ch + 32;
        printf("%c", ch);
    }

    return 0;
}
