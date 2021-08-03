#include <stdio.h>

int SumOfSeries(int n)
{
  int sum=0;

  for(int i=1;i<=n;i++)
  {
   sum = sum + (i * i);
  }
  return sum;
}

int main()
{
  int num;

  printf("Enter number: ");
  scanf("%d",&num);

  printf("Sum of the series: %d",SumOfSeries(num) );
}

