#include<stdio.h>
int main() {

    /* Arrays */

    // Array Declaration

    int price[3] = {25, 35, 45};

    // Input and Output of Array

    int year[3];
    printf("Enter the 1st Year: ");
    scanf("%d", &year[0]);
    printf("Enter the 2nd Year: ");
    scanf("%d", &year[1]);
    printf("Enter the 3rd Year: ");
    scanf("%d", &year[2]);
    printf("Value entered are: %d %d %d\n", year[0], year[1], year[2]);

    // Changing Array Element

    int myNumber[] = {25,50,75,100};
    myNumber[0] = 30;
    printf("%d", myNumber[0]);
}






 