#include<stdio.h>
int main(){

    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("%c is %s digit", ch, (ch >= '0' && ch <= '9') ? "a" : "not a");
    return 0;
}
