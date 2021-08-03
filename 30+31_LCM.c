#include<stdio.h>

int main()
{
    int a,b,i,HCF,LCM;
    scanf("%d %d", &a, &b );
    for(i=1; i<=a; i++)
	 {
		  if(a%i==0 && b%i==0)
		  {
		   	HCF = i;
		  }
	 }
	 LCM = (a * b)/HCF;
	 printf("HCF = %d\nLCM = %d", HCF, LCM);
	 return(0);

}
