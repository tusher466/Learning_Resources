#include<stdio.h>
int main(){

    for(int i = 1; i <= 10; i++)
    {
        if(i == 6)
        {
            continue;
        }
        printf("%d ", i);
    }

    return 0;
}
