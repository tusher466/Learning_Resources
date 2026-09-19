#include<stdio.h>

void printNumbers(int ar[], int n);

int main()
{
    int ar[] = {1, 2, 3, 4, 5, 6};
    printNumbers(ar, 6);
    return 0;

}

void printNumbers(int ar[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d\t", ar[i]);
    }
}
