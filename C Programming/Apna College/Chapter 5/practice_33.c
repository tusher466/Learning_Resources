#include<stdio.h>

int calcuPercentage(int science, int math, int sanskrit);

int main(){

    int sc = 98;
    int math = 95;
    int sanskrit = 99;

    printf("Percentage is : %d%%", calcuPercentage(sc, math, sanskrit));
    return 0;

}

int calcuPercentage(int science, int math, int sanskrit){

    return ((science + math + sanskrit) / 3);
}
