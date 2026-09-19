#include<stdio.h>
int main(){

    int ar[5];

    //Input in array
    int *ptr = &ar[0];
    for(int i = 0; i < 5; i++)
    {
        printf("%d index : ", i);
        scanf("%d", (ptr + i));
    }

    //Output an array
    for(int i = 0; i < 5; i++)
    {
        printf("%d index : %d\n", i, *(ptr + i));
    }

    return 0;
}
