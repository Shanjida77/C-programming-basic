#include<stdio.h>
void findEvenOddNumber(int size, int originalArr[], int evenArr[], int oddArr[])
{
    int i,j=0,k=0;
    printf("Original array \n");
    for(i=0; i<size; i++)
    {
        	printf("%d",originalArr[i]);
    }
    for(i=0; i<size; i++)//check
    {
        if(originalArr[i]%2==0)
        {
         evenArr[j]=originalArr[i];
          j++;
          }
        else
        {
            oddArr[k]=originalArr[i];
          k++;
        }
    }
    printf("\nEven array \n");
    for(i =0; i<j;i++)
    {
        printf("%d\n",evenArr[i]);
    }
    printf("Odd array \n");
    for(i =0; i<k;i++)
    {
        printf("%d\n",oddArr[i]);
    }

}

int main()
{
    int a[20],b[20],c[20],i,n ;

    printf("Enter size of the  array : ");
    scanf("%d", &n);
    printf("Enter elements in array :\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    /*printf("Original array \n");
    for(i=0; i<n; i++)
    {
        	printf("%d  ",a[i]);
    }*/
    /*for(i=0; i<n; i++)
    {
        if(a[i]%2==0)
        {
         b[j]=a[i];
          j++;
          }
        else
        {
            c[k]=a[i];
          k++;
        }
    }
    printf("Even array \n");
    findEvenOddNumber(n,a,b,c);
    /*for(i =0; i<j;i++)
    {
        printf("%d\n",b[i]);
    }
    printf("Odd array \n");
   /* for(i =0; i<k;i++)
    {
        printf("%d\n",c[i]);
    }*/
    findEvenOddNumber(n,a,b,c);

    return 0;
}

