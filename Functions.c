#include<stdio.h>

/* Creating a function to print Hello world! */

// printHello() function

void printHello() {
    printf("Hello World!\n");
}

/* Creating a function to print sum of two numbers with arguments */

// printSum() function

int printSum(int x, int y) {
    return x + y; //Return Value
}

/* Creating a Function to Print the Table for a number entered by user*/

// table() function 
 
void table(int n){
    for(int i = 0; i < 11; i++){
        printf("%d x %d = %d\n", n, i, n*i);
    }
}
 
// main() function

int main() {
    printHello(); // Function call

    // Sum
    
    int num1, num2, sum;
    printf("Enter Two Numbers: ");
    scanf("%d%d", &num1, &num2);
    sum = printSum(num1, num2); // Argument // Function Call
    printf("The sum of Input numbers is %d\n", sum);

    // Table

    printf("\n|---Table---|\n");
    int number;
    printf("Enter a Number you want to print the table for: ");
    scanf("%d", &number);
    table(number);
    return 0;
}




