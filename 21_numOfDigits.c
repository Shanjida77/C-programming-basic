#include<stdio.h>

int main()
{
    int i,n;
    scanf("%d",&n);

    i=0;
    while(n!=0)
    {
        n=n/10;
        i++;
    }
    printf("Number of degits= %d\n",i);
    return 0;

}
