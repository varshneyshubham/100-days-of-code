
#include <stdio.h>
#include <conio.h>
 
void main()
{
    int i,j,num; 
    clrscr();
   for(i=1; i<=20; i++) 
    {
        num= i;     
        for(j=1; j<=10; j++)
        {
             
            printf("%3d\t",(num*j));
        }
  
        printf("\n");
    }
    getch();
}
