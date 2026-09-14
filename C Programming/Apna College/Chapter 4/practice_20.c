#include<stdio.h>
int main(){

    for(int i = 5; i <= 50; i++)
    {
        if(i % 2 == 0)
        {
            continue;
        }
        printf("%d ", i);
    }

    return 0;
}
