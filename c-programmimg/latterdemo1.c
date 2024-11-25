#include<stdio.h>
int main()
{
    char lower;
    printf("Enter any lowercase letter:");
    scanf("%c",&lower);

    printf("the uppercase letter:%C",lower-32);  //A=65
}
