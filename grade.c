#include <stdio.h>

int main()
{
    int marks;
    scanf("%d", &marks);

    if (marks >= 33 && marks <= 100)
    {
        if (marks >= 80 && marks <= 100)
        {
            printf("A+\n");
            if (marks >= 90)
            {
                printf("Scholarship\n");
            }
        }
        else if (marks >= 70 && marks <= 79)
        {
            printf("A\n");
        }
        else if (marks >= 60 && marks <= 69)
        {
            printf("A-\n");
        }
        else if (marks >= 50 && marks <= 59)
        {
            printf("B\n");
        }
        else if (marks >= 40 && marks <= 49)
        {
            printf("C\n");
        }
        else if (marks >= 33 && marks <= 39)
        {
            printf("D\n");
        }

        printf("You have passed\n");
    }
    else if (marks <= 32)
    {
        printf("F\n");
        printf("Failed. Try again\n");
    }

    return 0;
}