#include <stdio.h>
#include<conio.h>
void main()
{
    int a, b;
    c

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d",&b);

    

    a = a - b;
    b = a + b;
    a = b - a;

    printf("\nAfter swapping, firstNumber = %d\n", a);
    printf("After swapping, secondNumber = %d", b);

    getch();
}

