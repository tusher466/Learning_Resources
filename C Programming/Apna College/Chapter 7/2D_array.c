#include<stdio.h>
int main()
{
    //2 student 3 subjet marks using 2d array(2 x 3)

    int marks[2][3]; //_ _ _ | _ _ _
    marks[0][0] = 99;
    marks[0][1] = 88;
    marks[0][2] = 77;

    marks[1][0] = 79;
    marks[1][1] = 58;
    marks[1][2] = 67;

    printf("%d", marks[1][2]);

    return 0;
}
