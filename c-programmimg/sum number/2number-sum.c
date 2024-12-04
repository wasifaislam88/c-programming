
#include <stdio.h>



int main() {
    int num1, num2;

    printf("Enter two numbers: ");

    scanf("%d %d", &num1, &num2);

    int sum = add(num1, num2);

    printf("Sum: %d\n", sum);

    return 0;
}



int add(int a, int b) {

    while (b != 0) {

        int w = a & b;

        a = a ^ b;

        b = w << 1;
    }
    return a;
}
