#include<stdio.h>

void doWork(int a, int b, int *sum, int *prod, float *avg);

int main(){

    int a = 47, b = 11;
    int sum, prod;
    float avg;
    doWork(a, b, &sum, &prod, &avg);

    printf("Sum = %d\nProd = %d\nAvg = %.2f\n", sum, prod, avg);
    return 0;
}

void doWork(int a, int b, int *sum, int *prod, float *avg){

    *sum = a+b;
    *prod = a*b;
    *avg = (a+b)/2;

}
