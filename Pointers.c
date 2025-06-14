#include<stdio.h>

/* Pointers in Function Call */

// Call by Value

int square(int valueOfSide) {
    valueOfSide = valueOfSide * valueOfSide;
    return valueOfSide;
}

// Call by Refrence 

int newSquare(int* valueOfSide) {
    *valueOfSide = (*valueOfSide) * (*valueOfSide);
    return *valueOfSide;
}

// Main Function 

int main() {

    /* Pointers*/

    // Memory Address

    int myAge = 23;
    printf("Memory Address is: %p\n", &myAge);

    // Pointer 

    int number = 22;
    printf("Memory Address of number is: %p\n", &number);
    int* ptrOne = &number; // Pointer Declaration
    printf("Memory Address of ptrOne is: %p\n", &ptrOne);
    int newNumber = *ptrOne; // value at address stored in pointer
    printf("Value of new Number is: %d\n", newNumber);

    // Pointer to Pointer 

    float price = 100.00;
    float* pointer = &price;
    printf("Value at ptr = %.2f\n", *pointer);
    float** pointerToPointer = &pointer;
    printf("Value at pptr = %.2f\n", **pointerToPointer);

    /* Pointer with Functions */ 

    int side, area;
    printf("Enter Side of Square: ");
    scanf("%d", &side);

    // Call by Value 

    area = square(side);
    printf("Area of Square is: %d\n", area);
    printf("Side: %d\n", side);

    // Call by Refrence 

    area = newSquare(&side);
    printf("Area of Square is: %d\n", area);
    printf("Side: %d\n", side);

    /* Pointer Arithematic */
    
    // Incrementing Pointer

    int age = 22;
    int* ptrTwo = &age;
    printf("Memory address of age stored in ptrTwo: %d\n", ptrTwo);
    ptrTwo++;
    printf("Memory address stored in ptrTwo after ptrTwo++: %d\n", ptrTwo);

    return 0;
}




