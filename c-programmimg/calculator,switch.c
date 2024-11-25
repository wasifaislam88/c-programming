#include<stdio.h>
int main()

{

    double num1,num2;
    char oper;


    printf("Enter two numbers:");
    scanf("%1f %1f",&num1,num2);

    printf("Enter an operator(+,-,*,/):");
    scanf("%c",&op);

    switch(op);
    {
    case '+':
        {
            printf("%1f+%1f=%1f\n",num1,num2,num1+num2);
            break;
        }

        case '-':
        {
            printf("%1f-%1f=%1f\n",num1,num2,num1-num2);
            break;
        }

        case '*':
        {
            printf("%1f*%1f=%1f\n",num1,num2,num1*num2);
            break;
        }


         case '/':
        {
            printf("%1f/%1f=%1f\n",num1,num2,num1/num2);
            break;
        }

         default:
            printf("Not a valid operator\n");

    }


}
