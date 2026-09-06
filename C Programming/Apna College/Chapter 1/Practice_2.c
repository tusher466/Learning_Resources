#include<stdio.h>
int main(){

    float r, pi = 3.1415, area;
    scanf("%f", &r);
    area = pi * (r * r);
    printf("The area of circle is: %.3f", area);

    return 0;
}
