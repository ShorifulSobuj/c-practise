// Weight Category Analysis
#include <stdio.h>

int main()
{
    int weight;
    printf("Enter your Weight: ");
    scanf("%d", &weight);

    if (weight <= 30)
    {
        printf("Underweight\n");
        printf("Take enough nutritious food\n");
    }
    else if (weight >= 31 && weight <= 50)
    {
        printf("Average Weight\n");
    }
    else if (weight >= 51 && weight <= 70)
    {
        printf("Perfect Weight\n");
    }
    else if (weight >= 71 && weight <= 90)
    {
        printf("Heavy Weight\n");
    }
    else if (weight >= 91)
    {
        printf("Overweight\n");
        printf("Do Exercise\n");
    }
    else
    {
        printf("Invalid Value\n");
    }

    return 0;
}
