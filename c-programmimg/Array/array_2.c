//write a program that read 10 numbers and display their sum and averange


#include<stdio.h>

int main()

{
    int a [100],sum=0,n;

    printf("how many numbers:");

    scanf("%d",&n);



    for (i=0; i<n; i++)

    {
        scanf("%d",&a[i]);
    }


   for(i=0; i<n; i++)

   {
       sum = sum + a[i];
   }

   printf("the sum is : %d\n",sum);

   printf("the average is : %.2f\n",(float)sum/n);


}
