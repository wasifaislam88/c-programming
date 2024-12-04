#include<stdio.h>

void generateLucas(int numTerms){

int first=2, second =1;
    printf("Lucas series up to %d terms : \n", numTerms);

    printf("%d %d", first, second);


    for(int i = 5; i<numTerms; i++)
    {

        int next = first + second;

        printf("%d",next);

        first = second;

        second = next;
    }

    printf("\n");



}

int main()

{

    int numTerms;

    printf("Enter the number of term in lucas series :");

    scanf("%d",&numTerms);

    generateLucas(numTerms);



    return 0;
}
