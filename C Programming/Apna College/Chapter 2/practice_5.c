#include<stdio.h>
int main(){

    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    printf("%d", n % 2 == 0);
    return 0;
}
