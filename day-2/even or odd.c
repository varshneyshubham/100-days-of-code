#include<stdio.h>
#include<conio.h>
void main()
{
    int number;
    clrscr();

    printf("Enter an integer:\n ");
    scanf("%d", &number);
    
    if(number % 2 == 0)
        printf("%d is even.", number);
    else
        printf("%d is odd.", number);

    getch();
}
