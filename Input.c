#include<stdio.h>
int main() {
    
    // Taking a number as input

    int myNum;
    printf("Enter a number: ");
    scanf("%d",&myNum);
    printf("The number you entered is: %d\n", myNum);

    // Taking a character as input

    getchar(); // clears the new line from the intial scanf function

    char myChar;
    printf("Enter a single character: ");
    scanf("%c",&myChar);
    printf("The character you entered is: %c\n", myChar);
    return 0;
}