#include<stdio.h>
int main(){

    // Declaring Variables 

    int age = 24;
    float pi = 3.14;
    char star = '*';

    // printing variable using Format Specifiers

    printf("age is %d\n", age);
    printf("Pi is %f\n", pi);
    printf("Star is %c\n", star);

    // Write a Program to calculate area of rectangle

    int length = 4, width = 6, area;
    area = length * width;
    printf("Area of Rectangle is %d\n", area);

    // Constants
    const int BIRTHYEAR = 2001; // use const keyword
    
    return 0;
}