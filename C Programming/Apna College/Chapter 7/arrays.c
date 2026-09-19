#include<stdio.h>

int main(){

    // int marks1 = 97;
    // int marks2 = 98;
    // int marks3 = 89;

    int marks[3];
    printf("Enter Phy: ");
    scanf("%d", &marks[0]);

    printf("Enter Che: ");
    scanf("%d", &marks[1]);

    printf("Enter Mat: ");
    scanf("%d", &marks[2]);

    int mark[] = {97, 98, 89};

    printf("%d %d", mark[2], mark[1]);
}
