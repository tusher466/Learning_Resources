//
// Created by eftia on 10/30/2025.
//
// Phitron Module: 3

#include <stdio.h>
int main() {

    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            printf("%d - Even number\n", i);
        }
        else {
            printf("%d - Odd number\n", i);
        }
    }

    return 0;
}
