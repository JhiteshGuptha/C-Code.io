#include<stdio.h>

/* Function Declaration*/

void printHelloWorld(int count);

// Main() function

int main() {
    printHelloWorld(5);
    return 0;
}

/* Creating a Recursive function to print Hello World in a loop*/
 
// printHelloWorld Recursive function 

void printHelloWorld(int count) {
    if(count == 0) {
        return;
    }
    printf("Hello World\n");
    printHelloWorld(count-1); // printHelloWorld is called inside the same function
}

