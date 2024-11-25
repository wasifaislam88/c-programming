#include<stdio.h>
int main()
{
    int n,i,fact=1;

    printf("Enter any positive number :");
    scanf("%d",&n);

    for(i=1; i<=n; i++)

    {
        fact = fact *i; //fact=120
    }

    printf("%d\n",fact);


    getch();
}
