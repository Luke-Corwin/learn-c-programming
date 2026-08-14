#include <stdio.h>
#include <stdlib.h>

int main(){

    int number = 0;
    printf("Enter the number of players: ");
    scanf("%d", &number);

    int *scores = calloc(number, sizeof(int));

    if(scores == NULL){
        printf("Memory allocation failed!\n");
        return 1; // exits the program to prevent segmentation failure
    }

    for(int i = 0; i < number; i++){
        printf("Enter score #%d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    for(int i = 0; i < number; i++){
        printf("%d ", scores[i]);
    }

    free(scores);
    scores = NULL; // similar to renting space in the heap

    return 0;
}

// contigous allocation allocates memory dynamically and sets all allocated bytes to 0 is better if you want minimal bugs