#include<stdio.h>

//swap call by value
void swap(int a, int b);

//swap call by reference
void _swap(int* a, int* b);

int main(){

    int x = 3, y = 5;
    swap(x, y);
    printf("x = %d & y = %d\n", x, y);

    int c = 4, d = 6;
    _swap(&c , &d);
    printf("c = %d & d = %d\n", c, d);

    return 0;
}

void swap(int a, int b){

    int temp = a;
    a = b;
    b = temp;
    printf("a = %d & b = %d\n", a, b);
}

void _swap(int* a, int* b){

    int temp = *b;
    *b = *a;
    *a = temp;
    printf("a = %d & b = %d\n", *a, *b);
}
