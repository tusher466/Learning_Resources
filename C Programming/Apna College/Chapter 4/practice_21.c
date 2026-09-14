#include<stdio.h>
int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int ans = 1;

    for(int i = 1; i <= n; i++)
    {
        ans = i * ans;
    }
    printf("%d", ans);

    return 0;
}
