#include<stdio.h>

int main()

{
    int first=0,second=1,count=0,fibo,n;
    printf("Enter Range :");

    scanf("%d",&n);


    while(count<n){
        if (count<=1){
          fibo=count;
        }

        else{
            fibo = fibo + second;
            first = second;
            second=fibo;

        }


        printf("%d",fibo);
        count++;







    }


}
