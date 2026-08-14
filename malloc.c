#include <stdio.h>
#include <stdlib.h>

int main(){

    int number = 0;
    printf("Enter the number of grades: ");
    scanf("%d", &number);

    char *grades = malloc(number * sizeof(char));

    if(grades == NULL){
        printf("Memory allocation failed!\n");
        return 1;
    } // prevents memory segmentation

    for(int i = 0; i < number; i++){
        printf("Enter grade #%d: ", i + 1);
        scanf(" %c", &grades[i]); // at the index of i insert a value at the address grades
    }

    for(int i = 0; i < number; i++){
        printf("%c ", grades[i]);
    }

    free(grades); //returning the rented space (memory) back to the OS
    grades = NULL; //avoids dangling pointer

    return 0;
}

// malloc is a function that dynamically allocates a specified number of bytes in memory