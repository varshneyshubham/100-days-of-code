#include <stdio.h>
#include<conio.h>
int main()
{
    int integerType;
    float floatType;
    double doubleType;
    char charType;
    clrscr();
    
    printf("Size of int: %ld bytes\n",sizeof(integerType));
    printf("Size of float: %ld bytes\n",sizeof(floatType));
    printf("Size of double: %ld bytes\n",sizeof(doubleType));
    printf("Size of char: %ld byte\n",sizeof(charType));

    return 0;
    getch();
}
