

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


        for(col=1; col<=2*row-1; col++)
            printf("%c",col+64); //col+64=ABC

            printf("\n");
    }

}