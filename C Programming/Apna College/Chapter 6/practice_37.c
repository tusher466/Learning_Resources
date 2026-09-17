#include<stdio.h>
int main(){

    int i;
    scanf("%d", &i);
    int *ptr = &i;
    int **pptr = &ptr;

    printf("%d\n", **pptr);

    return 0;
}
