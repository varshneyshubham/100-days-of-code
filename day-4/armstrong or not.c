
#include <stdio.h>
#include<conio.h>
 void main()
 
{
    int num, sum=0, rem=0,temp;
 
    printf("Enter an integer number:\n ");
    scanf("%d", &num);
 
    temp=num;
 
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum + (rem*rem*rem);
        temp=temp/10;
    }  
 
    if(sum==num)  
        printf("%d is an Armstrong number.",num);
    else
        printf("%d is not an Armstrong number.",num);
 
    getch();
}
