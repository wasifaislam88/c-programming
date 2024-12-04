#include<stdio.h>

int main()

{
    double sum =0,n,i;

    printf("Enter n = ");
    scanf("%1f",&n);


    for (i=1; i<=n;i++)
    {

        sum= sum + (1/i);

    }


        if (i==1)
            printf("\n1 +");


        else if (i==n)

            printf("1/%1f)",i);


        else
            printf("1/%1f+)",i);



    printf("= %.21f\n",sum);
}
