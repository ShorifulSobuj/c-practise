// Online C compiler to run C program online
#include <stdio.h>

int main() {
     double num1, num2;
     char operator;
     printf("Select an Operator: + - * /: ");
     scanf("%c", &operator);
     printf("Enter Number1 and Number2: ");

     scanf("%lf %lf", &num1, &num2);

     switch (operator)
    {
    case '+':
        printf("The sum is: %.2lf", (num1 + num2));
        break;

    case '-':
        printf("The sub is: %.2lf", (num1 - num2));
        break;

    case '*':
        printf("The mul is: %.2lf", (num1 * num2));
        break;

    case '/':
        printf("The div is: %.2lf", (num1 / num2));
        break;



    }

    return 0;
}
