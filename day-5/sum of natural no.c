
#include <stdio.h>
#include<conio.h>
void main()
{
    int n, i, sum = 0;
    
    printf("Enter a positive integer: ");
    scanf("%d",&n);

    for(i=1; i <= n; ++i)
    {
        sum = sum + i;
    }

    printf("Sum = %d",sum);

    getch();
}
