#include<stdio.h>

void Indian();
void French();

int main(){

    //1 for Indian & 2 for French
    int opt;
    printf("Enter option(1-2): ");
    scanf("%d", &opt);
    if(opt == 1){
        Indian();
    }
    if(opt == 2){
        French();
    }
   
    return 0;

}

void Indian(){

    printf("Namaste\n");
}

void French(){
    printf("Bonjour\n");
}
