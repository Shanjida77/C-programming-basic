#include<stdio.h>

int main()
{
    int num;
    int count=0;
    printf("Input a binary number: ");
    scanf("%d", &num);

    int copy = num, temp = 0;

    while(copy != 0)
    {
        temp = copy%10;

        if((temp==0) || (temp==1))
        {
            copy = copy/10;

            if(copy == 0)
            {

                while (num != 0)
                {
                    num /= 10;     // n = n/10
                    ++count;
                }
                printf("Number of digits: %d", count);
                break;
            }
        }
        else
        {
            printf("Not a valid binary number.\n");
            break;
        }
    }
    return 0;
}
