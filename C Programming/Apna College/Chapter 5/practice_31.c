#include<stdio.h>

float squareArea(float side);
float circleArea(float radius);
float regtangleArea(float a, float b);

int main(){

    float a = 5.0;
    float b = 10.0;
    float side = 10;
    float radius =  4;

    printf("Area of regtangle is  : %f\n", regtangleArea(a, b));
    printf("Area of square is : %f\n", squareArea(side));
    printf("Area of circle is : %f\n", circleArea(radius));

    return 0;

}

float squareArea(float side){
    return side * side;
}

float circleArea(float radius){
    return 3.1415 * (radius * radius);
}

float regtangleArea(float a, float b){
    return a * b;
}
