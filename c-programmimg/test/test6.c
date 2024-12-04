//area=sqrt (s*(s-a)*(s-b)*(s-c))
//s=(a+b+c)/2

#include<stdio.h>
int main()
{
    double a,b,c,s,area;

    printf("Enter 3 values:");

    scanf("%1f %1f %1f",&a,&b,&c);

    s=(a+b+c)/2;

    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of triangle=%1f\n",area);
}
