#include<stdio.h>
int main(){

    //increment operator
    // ++i(pre increment)
    // i++(post increment)

    int i = 1;
    printf("%d\n", i++); //use, then increase
    printf("%d\n", i);

    printf("%d\n", ++i); //increase, then use
    printf("%d\n", i);

    return 0;
}
