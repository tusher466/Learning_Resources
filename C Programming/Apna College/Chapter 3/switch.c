#include<stdio.h>
int main(){

    // int day;
    // printf("Enter day(1-7): ");
    // scanf("%d", &day);

    // switch (day){
    //     case 1: printf("Saturday\n");
    //         break;

    //     case 2: printf("Sunday\n");
    //         break;

    //     case 3: printf("Monday\n");
    //         break;

    //     case 4: printf("Tuesday\n");
    //         break;

    //     case 5: printf("Wednesday\n");
    //         break;

    //     case 6: printf("Thursday\n");
    //         break;

    //     case 7: printf("Friday\n");
    //         break;

    //     default: printf("Enter 1 to 7\n");
    // }

    char day; // s-> saturday, S-> Sunday, m-> Monday, t-> tuesday, w-> Wednesday, T-> Thursday, f-> Friday
    printf("Enter day first character: ");
    scanf("%s", &day);

    switch (day){
        case 's': printf("Saturday\n");
            break;

        case 'S': printf("Sunday\n");
            break;

        case 'm': printf("Monday\n");
            break;

        case 't': printf("Tuesday\n");
            break;

        case 'w': printf("Wednesday\n");
            break;

        case 'T': printf("Thursday\n");
            break;

        case 'f': printf("Friday\n");
            break;

        default: printf("Not a valid day\n");
    }

    return 0;

}
