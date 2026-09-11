#include<stdio.h>
int main(){

    int n;

    do{
        printf("Enter a number: ");
        scanf("%d", &n);
        printf("%d\n", n);

        if(n % 7 == 0)
        {
            break;
        }
        
    } while(1);
    printf("You entered a number that multiple by 7");

    return 0;
}
