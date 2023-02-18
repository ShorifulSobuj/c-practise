#include <stdio.h>

int main() {
    int month;
    printf("Enter a Month count: ");
    scanf("%d", &month);

    switch (month)
    {
    case 1:
        printf("January Month is 31 Days");
        break;
    case 2:
        printf("February Month is 28/29 Days");
        break;
    case 3:
        printf("March Month is 31 Days");
        break;
    case 4:
        printf("April Month is 30 Days");
        break;
    case 5:
        printf("May Month is 31 Days");
        break;
    case 6:
        printf("June Month is 30 Days");
        break;
    case 7:
        printf("July Month is 31 Days");
        break;
    case 8:
        printf("August Month is 31 Days");
        break;
    case 9:
        printf("September Month is 30 Days");
        break;
    case 10:
        printf("October Month is 31 Days");
        break;
    case 11:
        printf("November Month is 30 Days");
        break;
    case 12:
        printf("December Month is 31 Days");
        break;

    default:
        printf("INVALID MONTH");
    }

    return 0;
}
