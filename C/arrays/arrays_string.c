#include <stdio.h>
#include <string.h>

int main() {

    char names[4][25] = {0};
    int rows = sizeof(names) / sizeof(names[0]); //the size of the array in bytes divided by a singular element bytes = # of bytes*

    for(int i = 0; i < rows; i++){
        printf("Enter a name: ");
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strlen(names[i]) - 1] = '\0';
    }

    for(int i = 0; i < rows; i++){
        printf("%s\n", names[i]);
    }
    
    return 0;
}

    /*char fruits[][10] = {"Apple",
                         "Banana",
                         "Coconut"};
    int size = sizeof(fruits) / sizeof(fruits[0]);

    fruits[1][4] = 'e';

    for(int i = 0; i < size; i++){
        printf("%s\n", fruits[i]);
    }*/