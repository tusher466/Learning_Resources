#include<stdio.h>
int main(){

    int age = 22;
    int *ptr = &age;

    //address
    printf("%p\n", &age);
    printf("%u\n", &age);
    printf("%u\n", ptr);
    printf("%u\n", &ptr);

    return 0;
}
