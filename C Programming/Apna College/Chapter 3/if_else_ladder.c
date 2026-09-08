#include<stdio.h>
int main(){

    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if(marks >= 80 && marks <= 100){
        printf("You got A+\n");
    }
    else if (marks >= 50 && marks < 80){
        printf("You got B+\n");
    }
    else if (marks >= 30 && marks < 50){
        printf("You got C+\n");
    }
    else{
        printf("Try next time\n");
    }

    return 0;
}
