#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;

    printf("Enter an number: ");
    scanf("%d%d", &a,&b);


    if(a<b)
        printf("b is greater");
    else
        printf("a is greater");

   getch();
}
