#include<stdio.h>

float convertTemp(float celsius);

int main(){
    float n;
    scanf("%f", &n);
    float far =convertTemp(n);
    printf("Far : %.2f", far);

    return 0;

}

float convertTemp(float celsius){
    float far = celsius * (9.0 / 5.0) + 32;
    return far;

}
