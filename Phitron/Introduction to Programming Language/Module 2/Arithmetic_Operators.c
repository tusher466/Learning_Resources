//
// Created by eftia on 10/26/2025.
//
// Phitron Module: 2

#include <stdio.h>
int main() {

    //Addition (+)
    int a, b;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);
    int sum;
    sum = a + b;
    printf("Sum of a and b is %d\n", sum);

    //Subtraction (-)
    int c, d;
    printf("Enter c and d: ");
    scanf("%d %d", &c, &d);
    int difference;
    difference = c - d;
    printf("Difference of c and d is %d\n", difference);

    //Multiplication (*)
    int e, f;
    printf("Enter e and f: ");
    scanf("%d %d", &e, &f);
    int product;
    product = e * f;
    printf("Product of e and f is %d\n", product);

    //Division (/)
    int g, h;
    printf("Enter g and h: ");
    scanf("%d %d", &g, &h);
    int quotient;
    quotient = g / h;
    printf("Quotient of g and h is %d\n", quotient);

    return 0;
}
