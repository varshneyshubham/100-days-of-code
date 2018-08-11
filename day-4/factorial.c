#include <stdio.h>
#include<conio.h>
 
void main()
{
    int num,i;
    long int fact;
    clrscr();
  
    printf("Enter an integer number:\n ");
    scanf("%d",&num);
    fact=1;
    for(i=num; i>=1; i--)
        fact=fact*i;
         
    printf("Factorial of %d is = %ld\n",num,fact);
      
    getch();
}
