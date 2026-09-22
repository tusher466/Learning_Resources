//
// Created by eftia on 12/11/2025.
//
// Problem: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/D

#include<stdio.h>
int main ()
{
    int pass;
    while (scanf("%d", &pass)) {
        if (pass == 1999) {
            printf("Correct\n");
            break;
        }
        else {
            printf("Wrong\n");
        }
    }
    return 0;
}
