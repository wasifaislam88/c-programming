
#include<stdio.h>

int main()

{
    int row,col,n;

    printf("Enter N= " );
    scanf("%d",&n);


    for (row=1; row<=n; row++)
    {
        //printing spaces


        for(col=1; col<=n-row; col++)
            printf(" ");


        for(col=1; col<=row; col++)
            printf("* ");

            printf("\n");
    }






}
