#include <stdio.h>
int main()
{
    int num, rev, remainder, result = 0;

    printf("Enter a three digit integer: ");
    scanf("%d", &num);

    rev = num;

    while (rev != 0)
    {
        remainder = rev%10;
        result += remainder*remainder*remainder;
        rev /= 10;
    }

    if(result == num)
        printf("%d is an Armstrong number.",num);
    else
        printf("%d is not an Armstrong number.",num);

    getch();
}
