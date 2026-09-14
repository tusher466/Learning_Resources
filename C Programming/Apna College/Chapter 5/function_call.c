#include<stdio.h>

void Indian();
void French();

int main(){

   Indian(); //Directly Call
   
    return 0;

}

void Indian(){

    printf("Namaste\n");
    French(); //Indirectly Call
}

void French(){
    printf("Bonjour\n");
}
