//1^2+2^2+3^2+......+n^2
//1+2+3+.....+n


#include<stdio.h>
int main()

{
    int n,i,sum=0;
    printf("Enter n:");
    scanf("%d",&n);

    for(i=1; i<=n; i=i+2)
    {
        sum =sum + i*i;

    }

    printf("sum = %d\n",sum);

    getch();

}
