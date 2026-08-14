#include <stdio.h>

int main() {
    
    int numbers[] = {10, 20, 30, 40, 50, 60, 70}; // each value in array is an element
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    char name[] = "Luke Skywalker";

    int size = sizeof(numbers) / sizeof(numbers[0]);

    for(int i = 0; i < size; i++){
        printf("%d ", numbers[i]);
    }

    /*
    printf("%d\n", sizeof(numbers));
    printf("%d\n", sizeof(numbers[0]));

    for(int i = 0; i < 5; i++){
        printf("%d ", numbers[i]);
    }
    */

    return 0;
}

//printf("%d", numbers); if you run an array through a function like printf the array decays into a pointer
/* numbers[2] = 100; // you are able to change arrays after they are made from outside of the array

    printf("%d", numbers[2]); */