#include<stdio.h>
int main(){

    // Variables with Datatypes

    int age = 24; // int datatype
    float pi = 3.14; // float datatype
    char star = '*'; // char datatype

    // Ascii to find character

    char ascii_code = 65;
    printf("Corresponding Alphabet to the code is: %c\n",ascii_code);
    
    // Decimal Precision

    printf("value of Pi is %f\n", pi);
    printf("Only one digit after decimal: %.1f\n", pi);
    printf("Only two digit after decimal: %.2f\n", pi);

    // To find the size of Datatype

    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    printf("%lu\n", sizeof(myInt));
    printf("%lu\n", sizeof(myFloat));
    printf("%lu\n", sizeof(myDouble));
    printf("%lu\n", sizeof(myChar));

    // Type conversion

    // Implicit conversion

    int value = 9.99; // Float value
    printf("%d\n", value); // Converted to int value automatically by gcc

    // Explicit Conversion

    // Before Converting

    float sum_before_converting = 5/2;
    printf("Before: %f\n", sum_before_converting);

    // After Converting

    float sum_after_converting = (float) 5/2;
    printf("After: %f\n", sum_after_converting);

    return 0;
}