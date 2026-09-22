//
// Created by eftia on 12/11/2025.
//
// Problem: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M

#include <stdio.h>
int main ()
{
    char ch;
    scanf("%c", &ch);
    if (ch >= '0' && ch <= '9') {
        printf ("IS DIGIT");
    }
    else {
        printf ("ALPHA\n");
        if (ch >= 'a' && ch <= 'z') {
            printf ("IS SMALL");
        }
        else {
            printf ("IS CAPITAL");
        }
    }

    return 0;
}
