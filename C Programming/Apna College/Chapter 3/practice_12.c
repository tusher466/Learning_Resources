#include<stdio.h>
int main(){

    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if(ch >= 'a' && ch <= 'z') {
        printf("Lower case\n");
    } 
    else if (ch >= 'A' && ch <= 'Z') {
        printf("Upper case\n");
    } else {
        printf("Not english\n");
    }

    return 0;
}
