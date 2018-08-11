
#include <stdio.h>
#include<conio.h>
void main()
{
    int     num,count,i,bin[32];
 
    printf("Enter decimal number:\n ");
    scanf("%d",&num);
 
    count=0;            
    while(num>0)
    {
        bin[count]=num%2;
        num=num/2;
        count++;
    }
  printf("Binary value is: ");
  for(i=count-1; i>=0;i--)
  printf("%d",bin[i]);
  getch();
}
