#include <stdio.h>
#include<conio.h>
void main(){

    int dividend, divisor, quotient, remainder;
    clrscr();

    printf("Enter dividend and divisor:\n ");
    
    scanf("%d%d", &dividend,&divisor);

  
    quotient = dividend / divisor;

  
    remainder = dividend % divisor;

    printf("Quotient = %d\n", quotient);
    
    printf("Remainder = %d", remainder);

  
}
