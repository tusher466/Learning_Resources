#include<stdio.h>
int main(){

    int l, w, perimeter;
    scanf("%d%d", &l, &w); 
    perimeter = 2 * (l + w);
    printf("Perimeter of rectangle is: %d\n", perimeter);

    return 0;
}
