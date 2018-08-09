#include<stdio.h>
#include<conio.h>
void main ( )

{

float celcius,fahrenheit;

clrscr( );

printf(“ Enter temperature in celcius :\n”);

scanf(“%f”,celcius);

fahrenheit= 1.8*celcius+32;

printf(“ Temperature in fahrenheit is %f :”,fahrenheit);

getch( );

}
