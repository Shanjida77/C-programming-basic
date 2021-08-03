#include <stdio.h>
int main()
{
    int a,b,c;
    int *ptr1, *ptr2, *ptr3;

    scanf("%d %d %d",&a,&b,&c);

    ptr1 = &a;
    ptr2 = &b;
    ptr3 = &c;
    if(*ptr1 > *ptr2)
    {
	if(*ptr1 > *ptr3)
	{
		printf("%d is max", *ptr1);
	}
	else
	{
		printf("%d is max", *ptr3);
	}
    }
    else
    {
	if(*ptr2 > *ptr3)
	{
		printf("%d is max", *ptr2);
	}
	else
	{
		printf("%d is max", *ptr3);
	}
    }
    return 0;
}
