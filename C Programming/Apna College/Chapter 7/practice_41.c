#include<stdio.h>
int main(){

    float price[3];
    printf("Enter 3 price: ");
    scanf("%f%f%f", &price[0], &price[1], &price[2]);

    printf("Total price 1: %.2f\n", price[0] + (0.15 * price[0]));
    printf("Total price 2: %.2f\n", price[1] + (0.15 * price[1]));
    printf("Total price 3: %.2f\n", price[2] + (0.15 * price[2]));

    return 0;
}
