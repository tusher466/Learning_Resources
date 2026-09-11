#include<stdio.h>
int main(){

    // int n;
    // printf("Enter a number: ");
    // scanf("%d", &n);
    // for(int i = 1 ; i <= n ; i++ ) //for(initialisation ; condition ; updation){do something}
    // {
    //     printf("%d Hello World\n", i);
    // }

    // float m;
    // printf("Enter a number: ");
    // scanf("%f", &m);
    // for(float i = 1.0; i <= m; i = i + 0.5)
    // {
    //     printf("%.2f ", i);
    // }

    char ch;
    printf("Enter a character(a-z): ");
    scanf(" %c", &ch);
    for(char i = 'a'; i <= ch; i++)
    {
        printf("%c ", i);
    }
    
    return 0;
}
