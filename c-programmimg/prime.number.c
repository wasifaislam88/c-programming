#include<stdio.h>

int main()
{
    int sum,count=0,i;
    printf("Enter any positive number");
    scanf("%d",&sum);

    for (i=2; i<sum; i++)
    {
        if (sum%i==0)
    {
         count++;
            break;
    }

        }




if(count==0)
    printf("prime number\n");

    else

    printf("not prime number");
}
