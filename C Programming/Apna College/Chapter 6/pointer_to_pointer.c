#include<stdio.h>
int main(){

    // int age = 22;
    // int *ptr = &age;
    // int **pptr = &ptr;

    // printf("%d\n", **pptr);

    float price = 30.56;
    float *ptr = &price;
    float **pptr = &ptr;

    printf("%.2f\n", **pptr);

    return 0;
}
