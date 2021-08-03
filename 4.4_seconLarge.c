#include <stdio.h>
#include <limits.h>
int main()
{
	int arr[20], i, Size;
	int first, second;

	scanf("%d", &Size);

	printf("Elements\n", Size);
	for (i = 0; i < Size; i++)
	{
		scanf("%d", &arr[i]);
    }

	first = second=INT_MIN;

	for (i = 0; i < Size; i++)
	{
		if(arr[i] > first)
		{
			second = first;
			first = arr[i];
		}
		else if(arr[i] > second && arr[i] < first)
		{
			second = arr[i];
		}
	}
	printf("\nLargest Number =  %d", first);
	printf("\nSecond Largest Number  =  %d", second);

	return 0;
}
