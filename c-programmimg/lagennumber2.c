#include<stdio.h>
int main()
 {  int marks;
 printf("Enter your markes :");
 scanf("%f",marks);

    if (marks>=80)
    printf("A+");


   else if (marks>=70)
    printf("A");


    else if (marks>=60)
    printf("A-");

    else if (marks<33)
        printf("Fail");



     return 0;
 }
