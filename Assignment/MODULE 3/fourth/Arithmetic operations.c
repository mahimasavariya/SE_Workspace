#include<stdio.h>
#include<conio.h>

void main()
{
    int a, b;

    printf("Enter your first value: ");
    scanf("%d", &a);

    printf("Enter your second value: ");
    scanf("%d", &b);

    printf("\nYour Addition is: %d", a + b);
    printf("\nYour Subtraction is: %d", a - b);
    printf("\nYour Multiplication is: %d", a * b);

    if(b != 0)
    {
        printf("\nYour Division is: %d", a / b);
        printf("\nYour Modulus is: %d", a % b);
    }
    else
    {
        printf("\nDivision and modulus not possible (divide by zero)");
    }

    getch();
}