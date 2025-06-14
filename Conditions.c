#include<stdio.h>
int main() {
    
    // If else statement

    int age;
    printf("Enter Age: ");
    scanf("%d", &age);
    if(age >= 18) {
        printf("Eligible to vote\n");
    } else {
        printf("Not Eligible to vote\n");
    }

    // if (else if) else

    int marks;
    printf("Enter Marks: ");
    scanf("%d", &marks);
    if(marks >= 90 && marks < 98) {
        printf("A Grade\n");
    } else if(marks >= 82 && marks < 90) {
        printf("B Grade\n");
    } else if (marks > 70 && marks < 82) {
        printf("C Grade\n");
    } else {
        printf("Fail: F\n");
    }

    // Short Hand if

    int time;
    printf("Enter Time as Integer: ");
    scanf("%d", &time);
    (time < 18) ? printf("Good Day\n") : printf("Good Night\n");

    // Switch

    int day;
    printf("Enter a Day in Number(1-7): ");
    scanf("%d", &day);
    switch(day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        default:
            printf("Monday\n");
    }
    
    return 0;
}
