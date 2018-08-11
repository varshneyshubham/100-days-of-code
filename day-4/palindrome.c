
#include <stdio.h>
#include<conio.h>
{
   int n, reverse = 0, t;
 
   printf("Enter a number to check  it is palindrome or not\n");
   scanf("%d", &n);
   t = n;
  while (t != 0)
   {
      reverse = reverse * 10;
      reverse = reverse + t%10;
      t = t/10;
   }
 
   if (n == reverse)
      printf("%d is a palindrome number.\n", n);
   else
      printf("%d isn't a palindrome number.\n", n);
 
   getch();
}
