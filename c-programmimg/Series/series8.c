//1^2 x 2^2 x 3^2 x......x n^2


#include<stdio.h>

int main()

{

    int i,n,result =1;
    printf("Enter n:");
    scanf("%d",&n);



    for(i=1; i<=n; i=i+2)
    {
        result=result*i*i*i;
    }

    printf("Result =%d\n",result);

    getch();
}
