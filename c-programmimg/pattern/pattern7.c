
#include<stdio.h>

int main()

{

    int n,row,col;

    printf("Enter N =");

    scanf("%d",&n);

    for(row=n; row>=1 ; row--)
    {
        for(col=1; col<=row; row%2) //col+64=ABC //row%2=
        {
            printf("%d",row);

        }
        printf("\n");
    }



    }




