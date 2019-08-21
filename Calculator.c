#include <stdio.h>
#include <math.h>

void Addition(int a, int b)
{
    printf("%d", a+b);
}

void Substraction(int a, int b)
{
    printf("%d", a-b);
}

void Division(int a, int b)
{
    printf("%d", a/b);
}

void Multiplication(int a, int b)
{
    printf("%d", a*b);
}
void Greater(int a, int b)
{
    (a > b ? printf("d", a) : printf("%d", b));
}

void CalculatingPower(int a, int b)
{
    printf("%d", pow(a, b));
}
int main()
{
    int choice, a, b;
    printf("Enter 1 for Addition\n");
    printf("Enter 2 for Substraction\n");
    printf("Enter 3 for Division\n");
    printf("Enter 4 for Multiplication\n");
    printf("Enter 5 for Greater\n");
    printf("Enter 6 for Calculating Power\n");
    printf("ENTER YOUR CHOICE\t");

    scanf("%d", &choice);
    
    printf("Enter two numbers\n");
    scanf("%d%d", &a, &b);
    
    switch (choice)
    {
    case 1:
        Addition(a, b);
        break;

    case 2:
        Substraction(a, b);
        break;
    
    case 3:
        Division(a, b);
        break;

    case 4:
        Multiplication(a, b);
        break;

    case 5:
        Greater(a, b);
        break;

    case 6:
        CalculatingPower(a, b);
        break;
    
    default:
        break;
    }
    
}