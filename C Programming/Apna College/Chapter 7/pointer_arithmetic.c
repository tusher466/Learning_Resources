#include<stdio.h>
int main(){

    //pointer can be incremented & decremented

    int age = 22;
    int *ptr = &age;
    printf("%u\n", ptr);
    ptr++;
    printf("%u\n", ptr);
    ptr--;
    printf("%u\n", ptr);

    float price = 20.00;
    float *pt = &price;
    printf("%u\n", pt);
    pt++;
    printf("%u\n", pt);
    pt--;
    printf("%u\n", pt);

    char star = '*';
    char *p = &star;
    printf("%u\n", p);
    p++;
    printf("%u\n", p);
    p--;
    printf("%u\n", p);

    //We can also subtract one pointer from another

    int age1 = 30;
    int age2 = 50;

    int *ptr1 = &age1;
    int *ptr2 = &age2;
    printf("%d\n", *ptr2 - *ptr1);

    //We can also compare 2 pointers

    int cost1 = 306;
    int cost2 = 206;

    int *ptr3 = &cost1;
    int *ptr4 = &cost2;
    printf("%u\n", ptr3 > ptr4);
    
    return 0;
}
