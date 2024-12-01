
#include <stdio.h>

int main() {
    int emptyBottle, consume = 0, newBottle;


    printf("Enter the number of bottles: ");
    scanf("%d", &emptyBottle);


    while(emptyBottle >=2){
        if(emptyBottle ==2){
            emptyBottle++;
        }

        newBottle =  emptyBottle / 3;
        consume  = consume + newBottle;
        emptyBottle = (emptyBottle % 3) + newBottle ;
    }




    printf("I can Consume: %d\n", consume);

    return 0;
}
