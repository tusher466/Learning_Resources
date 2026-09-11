#include<stdio.h>
int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int i = 0;
    while(i <= n)
    {
        printf("%d ", i);
        i++;
    }
    return 0;
}
