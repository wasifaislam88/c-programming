#include<stdio.h>
int main(){
    int num,i,count=0,inumber,totalprimeNo=0,sumation=0;
    printf("Enter a number here:");
     scanf("%d",&inumber);
     printf("Prime number are:");

     for(num=2;num<=inumber;num++) {
        count=0;
           for (i=2; i<num; i++){
        if(num%i==0){
          count++;
          break;
     }
     }
     if(count==0  && num > 1){
        printf("%d ",num);
        totalprimeNo++;
        sumation=sumation+num;
     }
     }
     printf("\nTotal prime Number from 1 to %d are: %d ",inumber,totalprimeNo);
     printf("\nSum of prime Number from 1 to %d are: %d ",inumber,sumation);
    return 0;
}
