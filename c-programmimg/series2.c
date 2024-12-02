//1+2+3+........+N

#include<stdio.h>
int main()
{
    int n,sum=0,a=2;

    printf("Enter the last number :");

    scanf("%d",&n);


    printf("2+4+6+.....+%d",n);

    while(a<=n)
    {
        sum= sum + a;
        a = a + 2;

    }

    printf("=%d\n",sum);

    getch();
}
