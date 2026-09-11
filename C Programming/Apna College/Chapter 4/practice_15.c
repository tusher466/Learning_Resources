#include<stdio.h>
int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int i;
    int sum = 0;
    for(i = n; i >= 1; i--)
    {
        sum += i;
        printf("%d ", i);
    }
    printf("\nSum = %d\n", sum);
    
    return 0;
}
