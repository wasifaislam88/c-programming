


//1+2+3+......................+n
#include<stdio.h>

int main()

{
    int n, sum=0,i;
    printf("Enter the last number of the series:");

    scanf("%d",&n);

    printf("1+2+3+....+%d",n);

    for (i=1; i<=n; i=i+1)

    {
        sum = sum + i; //sum=6
    }

    printf("= %d\n",sum);





    getch();
}
