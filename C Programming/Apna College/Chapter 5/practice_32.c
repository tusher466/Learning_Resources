#include<stdio.h>

void printHello(int count);

int main(){

    printHello(5);

    return 0;
}

//recursive function
void printHello(int count){
    if(count == 0){
        return;
    }

    printf("Hello World\n");
    printHello(count - 1);
}

