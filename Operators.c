#include<stdio.h>
int main() {
    
    int a, b, number;
    printf("Enter two numbers a and b: ");
    scanf("%d %d", &a, &b);

    /* Arithematic Operator*/

    printf("\n Performing Arithematic Operations \n");
    printf("|---------------------------------|\n");
    printf("Addition: %d\n", a + b);
    printf("Subraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %d\n", a / b);
    printf("Modulo: %d\n", a % b);
    printf("Increment on a: %d\n", ++a);
    printf("Decrement on a: %d\n", --a);

    /* Comaprision / Relational Operator */

    // Returns 1 if true, Returns 0 if false

    printf("\n Performing Relational Operations \n");
    printf("|--------------------------------| \n");
    printf("Equal to: %d\n", a == b);
    printf("Not Equal to: %d\n", a != b);
    printf("Greater than: %d\n", a > b);
    printf("Less  than: %d\n", a < b);
    printf("Greater than or Equal to: %d\n", a >= b);
    printf("Less than or Equal to: %d\n", a <= b);

    /* Logical Operator */

    // Mostly works on gates logic [AND, OR, NOT]

    printf("\n Performing Logical Operatorions \n");
    printf("|---------------------------------| \n");
    printf("AND: %d\n", a>2 && b>2);
    printf("OR: %d\n", a>2 || b<5);
    printf("NOT: %d\n", !(a>2 && b>2));

    /* Assignment Operator */

    // Also known as Shorthand Operator

    printf("\n Performing Assignment Operations \n");
    printf("|----------------------------------| \n");
    printf("Addition Assignment: %d\n", a += b);
    printf("Subraction Assignment: %d\n", a -= b);
    printf("Multiplication Assignment: %d\n", a *= b);
    printf("Division Assignment: %d\n", a /= b);
    printf("Modulo Assignment: %d\n", a %= b);
}