#include<stdio.h>
int main(){

    float x, y, z;
    float avg;
    scanf("%f%f%f", &x, &y, &z);
    avg = (x + y + z) / 3;
    printf("Average is: %.2f", avg);

    return 0;
}
