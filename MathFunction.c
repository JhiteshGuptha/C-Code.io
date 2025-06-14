#include<stdio.h>
#include<math.h>
int main() {
    int squareNum,x, y;
    float roundOffNum;

    // Square Root
    printf("Enter a Number: ");
    scanf("%d", &squareNum);
    printf("Square Root is: %.2f\n", sqrt(squareNum));

    // Round a Number 

    printf("Enter a Floating Number: ");
    scanf("%f", &roundOffNum);
    printf("Rounding Upwards: %.2f\n", ceil(roundOffNum));
    printf("Rounding downwards: %.2f\n", floor(roundOffNum));

    // Power [returns the value of x to the power of y: x^y]

    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    printf("power is: %.2f\n", pow(x, y));

    return 0;
}



