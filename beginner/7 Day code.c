// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int day;
    printf("Enter a day count: ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
    printf("Saturday");
    break;

    case 2:
    printf("Sunday");
    break;

    case 3:
    printf("Monday");
    break;

    case 4:
    printf("Tuesday");
    break;

    case 5:
    printf("Wedesday");
    break;

    case 6:
    printf("Thursday");
    break;

    case 7:
    printf("Friday");
    break;

    default:
    printf("INVALID NUMBER!!");
    }

    return 0;
}
