#include <stdio.h>
int fact(int n)
{
  if(n==1)
   {
    return 1;
   }
  else
  {
   return n*fact(n-1);
  }
}

int main()
{
   int n;
   scanf("%d", &n);
   int factor = fact(n);

   printf("%d Factorial Value is : %d", n, factor);

   return 0;
}
