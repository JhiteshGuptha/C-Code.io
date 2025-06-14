#include<stdio.h>
int main() {

    // While Loop

    printf("|-----While Loop------|\n");
    int i = 0;
    while(i <= 5) {
        printf("%d\n", i);
        i++;
    }

    /* Write a program to print the numbers from 0 to n, if n is given by user */

    printf("\n|-----Practice 1------|\n");
    int number = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    int j = 0;
    while(j <= number) {
        printf("%d\n", j);
        j++;
    }
    
    // Do While Loop

    printf("\n|-----Do While Loop------|\n");
    int x = 0;
    do {
        printf("%d\n", x);
        x++;
    } while(x <= 5);

    // For Loop

    printf("\n|-----For Loop------|\n");
    for(int y = 0; y <= 5; y++) {
        printf("%d\n", y);
    }

    // Nested For Loop

    printf("\n|-----Nested For Loop-----|\n");
    for(int s = 0; s <= 2; s++) {
        printf("Outer: %d\n", s); // Executed 3 times
        for(int t = 0; t <= 3; t++) {
            printf("Inner: %d\n", t); // Executed (3*4) times = 12 times
        }
    }
    return 0;

    // Break in While Loop

    printf("\n|-----Break-----|\n");
    for(int r = 0; r <= 10; r++) {
        if(r == 4) {
            break;
        }
        printf("%d\n", r);
    }

    // Break in For Loop

    printf("\n|-----Break in For-----|\n");
    for(int r = 0; r <= 10; r++) {
        if(r == 4) {
            break;
        }
        printf("%d\n", r);
    }

    // Continue in While Loop

    printf("\n|---Continue in While---|\n");
    int z = 0;
    while(z <= 5){
        if(z == 3) {
            z++;
            continue;
        }
        printf("%d\n", z);
        z++;
    }

    // Continue in For loop

    printf("\n|-----Continue in For-----|\n");
    for(int k = 0; k <= 5; k++) {
        if(k == 3) {
            continue;
        }
        printf("%d\n", k);
    }

    return 0;
}


