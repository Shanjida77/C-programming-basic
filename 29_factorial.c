#include<stdio.h>
 int main()
 {
     int i,n,fact=1;

     scanf("%d",&n);
     i=n;
     while(i>=1)
     {
         fact*=i;
         i--;
     }
     printf("Factorial =  %d\n",fact);
     return 0;
 }
