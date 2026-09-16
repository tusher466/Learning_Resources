#include<stdio.h>

void calculateTax(float value);

int main(){

    float value = 100.0;
    calculateTax(value);
    printf("Value is %f\n", value);

    return 0;

}

void calculateTax(float value){
    value = value + (0.15 * value);
    printf("Final price is: %f\n", value);
}
