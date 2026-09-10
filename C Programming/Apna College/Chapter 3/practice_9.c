#include<stdio.h>
int main(){

    int marks;
    printf("Enter your marks(0-100): ");
    scanf("%d", &marks);

    if(marks > 30 && marks <= 100){
        printf("PASS\n");
    } else{
        printf("FAIL\n");
    }

    return 0;
}
