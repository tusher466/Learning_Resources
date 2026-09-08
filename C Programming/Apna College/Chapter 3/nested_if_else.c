#include<stdio.h>
int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n >= 0){
        printf("Positive\n");

        if(n % 2 == 0){
            printf("Even\n");
        } else {
            printf("Odd\n");
        }
    } else {
        printf("Negative\n");
    }

    return 0;
}
