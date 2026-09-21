//
// Created by eftia on 12/11/2025.
//
// Phitron Module: 3

#include <stdio.h>
int main() {

    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}
