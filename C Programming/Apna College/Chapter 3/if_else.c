#include<stdio.h>
int main(){

    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age > 18){
        printf("You are adult\n");
        printf("You can cast vote");
    }
    else{
        printf("You are not adult\n");
        printf("You can't cast vote");
    }

    return 0;
}
