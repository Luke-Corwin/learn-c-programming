#include <stdio.h>

int main(){

    int scores[5] = {0}; //setting the size of uninitialized array | {0} keeps C from storing garabage in memory

    for(int i = 0; i < 5; i++){
        printf("Enter a score: ");
        scanf("%d", &scores[i]); //index has to be i to reflect cycle of the loop
    }

    for(int i = 0; i < 5; i++){
        printf("%d ", scores[i]);
    }

    return 0;
}