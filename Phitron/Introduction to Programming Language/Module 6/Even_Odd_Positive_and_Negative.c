//
// Created by eftia on 12/11/2025.
//
// Problem: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C

#include <stdio.h>
int main ()
{
    int n;
    int x;
    int even = 0, odd = 0, pos = 0, neg = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &x);
        if (x % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }

        if (x > 0)
        {
            pos++;
        }
        else if (x < 0)
        {
            neg++;
        }

    }
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", pos);
    printf("Negative: %d\n", neg);

    return 0;
}
