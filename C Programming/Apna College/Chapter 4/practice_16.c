#include<stdio.h>
int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int i;
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, (n * i));
    }

    return 0; 
}
