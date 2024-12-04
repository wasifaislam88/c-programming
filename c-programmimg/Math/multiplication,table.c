/*Enter any number :3
    3*1=3
    3*2=6......
    3*10=30
*/




#include<stdio.h>
int main()

{
    while(1){
         int num,i;
   printf("Enter any number:");
   scanf("%d",&num);
   for(i=1;i<=10;i++)

   {
      printf("%d x %d = %d\n",num,i,num*i);
   }

    }

}
