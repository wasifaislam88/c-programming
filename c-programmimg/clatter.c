#include<stdio.h>
int main()
{

    char ch;

    printf("Enter any latter:");

    scanf("%c",&ch);

    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'
       ||ch=='o'||ch=='U')

        printf("vowel");

        else
        printf("Consonant");

        getch();



}
