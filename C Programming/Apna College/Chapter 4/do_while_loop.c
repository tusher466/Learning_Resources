#include<stdio.h>
int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int i = n;
    do{
        printf("%d ", i);
        i--;

    } while(i >= 0);

    return 0;
}
