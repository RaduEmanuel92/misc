# include<stdio.h>
# include<stdlib.h>
#include<iostream>
#include<stdio.h>
int main()
{
   int a;
   char *x;
   x = (char *) &a;

   x[0] = 1;
   x[1] = 1;
   printf("%d\n",a);

   getchar();
   return 0;
}
